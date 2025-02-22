#include <pthread.h>
#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

#define MAX 10
#define N 4

// Global Variables
pthread_mutex_t data_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t console_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t order = PTHREAD_COND_INITIALIZER;
pthread_cond_t space = PTHREAD_COND_INITIALIZER;

// Data structure to represent a simplified Order 
struct Order {
    int order_num;
    int item_num;    
};

Order new_orders[N];        // Shared buffer for storing orders
int num_new_orders = 0;     // Count of new (unprocessed) orders
int order_num = 0;          // Global variable to generate unique order numbers

void* takeOrders(void* arg)
{
    int item;
    int index = 0;

    for(int i = 0; i < MAX; ++i) {
        // Beginning of critical region 1
        pthread_mutex_lock(&data_mutex);
        while (num_new_orders == N) {  // Buffer full, wait for space
            pthread_cond_wait(&space, &data_mutex);
        }
        pthread_mutex_unlock(&data_mutex);

        pthread_mutex_lock(&console_mutex);
        cout << "Enter a menu item number between 1 and 50: ";
        while (!(cin >> item) || item < 1 || item > 50) {  
            cin.clear();
            cin.ignore(1000, '\n');  
            cout << "Invalid input. Enter a number between 1 and 50: ";
        }
        cout << "Got new order! Order number is " << order_num << " and item number: " << item << endl;
        pthread_mutex_unlock(&console_mutex);
        // End of critical region 1

        // Beginning of critical region 2
        pthread_mutex_lock(&data_mutex);
        
        // Store new order in buffer
        new_orders[index].order_num = order_num;
        new_orders[index].item_num = item;
        index = (index + 1) % N;  // Wrap index around circular buffer
        num_new_orders++;
        order_num++;

        pthread_cond_signal(&order);  // Signal consumer
        pthread_mutex_unlock(&data_mutex);
        // End of critical region 2
    }

    pthread_exit(NULL);
}

void* processOrders(void* arg)
{
    int item, o_num;
    int index = 0;

    for(int i = 0; i < MAX; ++i) {
        // Beginning of critical region 3
        pthread_mutex_lock(&data_mutex);
        while (num_new_orders == 0) {  // Buffer empty, wait for an order
            pthread_cond_wait(&order, &data_mutex);
        }

        // Retrieve order from buffer
        o_num = new_orders[index].order_num;
        item = new_orders[index].item_num;
        index = (index + 1) % N;  
        num_new_orders--;

        pthread_cond_signal(&space);  // Signal producer
        pthread_mutex_unlock(&data_mutex);
        // End of critical region 3

        // Beginning of critical region 4
        pthread_mutex_lock(&console_mutex);
        cout << "Processing order number " << o_num << " with item number: " << item << endl;
        pthread_mutex_unlock(&console_mutex);
        // End of critical region 4

    }

    pthread_exit(NULL);
}

int main()
{
    pthread_t id1, id2;
    
    // Create threads to take and process orders
    pthread_create(&id1, NULL, processOrders, NULL);
    pthread_create(&id2, NULL, takeOrders, NULL);

    // Ensure main thread waits for both threads to complete
    pthread_join(id1, NULL);
    pthread_join(id2, NULL);

    // Print goodbye message
    cout << "Phew! Done with orders for today!" << endl;

    pthread_exit(NULL);
}
