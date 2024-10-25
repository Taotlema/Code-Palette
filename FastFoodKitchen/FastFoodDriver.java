import java.util.Scanner;

/**
 *
 * ITSC 1213 
 * University of North Carolina at Charlotte
 */

public class FastFoodKitchenDriver {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        FastFoodKitchen kitchen = new FastFoodKitchen();

        Scanner sc = new Scanner(System.in);

        while (kitchen.getNumOrdersPending() != 0) {
            //Takes input as to what the user wants to do
            //Implement a try catch for inputMismatch in the case the user doesn't input a number
            System.out.println("Please select from the following menu of options, by typing a number:");
            System.out.println("\t 1. Order food");
            System.out.println("\t 2. Cancel last order");
            System.out.println("\t 3. Show number of orders currently pending");
            System.out.println("\t 4. Complete order");
            System.out.println("\t 5. Check on order");
            System.out.println("\t 6. Cancel order");
            System.out.println("\t 7. Exit");

            int num = sc.nextInt();
            switch (num) {
                case 1:
                    //Takes User Input for BurgerOrder
                    //Edit the code as to have a try and catch for inputMismatch (if the user provides a double or an int at the wrong time)
                    System.out.println("How many hamburgers do you want?");
                    int ham = sc.nextInt();
                    System.out.println("How many cheeseburgers do you want?");
                    int cheese = sc.nextInt();
                    System.out.println("How many veggieburgers do you want?");
                    int veggie = sc.nextInt();
                    System.out.println("How many sodas do you want?");
                    int sodas = sc.nextInt();
                    System.out.println("Is your order to go? (Y/N)");
                    char letter = sc.next().charAt(0);
                    boolean TOGO = false;
                    if (letter == 'Y' || letter == 'y') {
                        TOGO = true;
                    }
                    int orderNum = kitchen.addOrder(ham, cheese, veggie, sodas, TOGO);
                    System.out.println("Thank you. Your order number is " + orderNum);
                    System.out.println();
                    break;
                case 2:
                    //Cancels the most recent Burger Order
                    boolean ready = kitchen.cancelLastOrder();
                    if (ready) {
                        System.out.println("Thank you. The last order has been canceled");
                    } else {
                        System.out.println("Sorry. There are no orders to cancel.");
                    }
                    System.out.println();
                    break;
                case 3:
                    //Show the number of orders that are currently pending
                    System.out.println("There are " + kitchen.getNumOrdersPending() + " pending orders");
                    break;
                case 4:
                    //Complete Order
                    System.out.println("Enter order number to complete?");
                    int order = sc.nextInt();
                    kitchen.completeSpecificOrder(order);
                    System.out.println("Your order is ready. Thank you!");
                    break;
                case 5:
                    //Doesn't do anything technical with BurgerOrder - Leave it alone
                    System.out.println("What is your order number?");
                    order = sc.nextInt();
                    ready = kitchen.isOrderDone(order);
                    if (ready) {
                        System.out.println("Sorry, no order with this number was found.");
                    } else {
                        System.out.println("No, it's not ready, but it should be up soon. Sorry for the wait.");
                    }
                    System.out.println();
                    break;
                case 6:
                    //Cancels the BurgerOrder based on an attribute - don't edit the cancelled order will not be seen in the end of day reciept
                    //This is because it would be in case 7 and due to the top-down nature of java will not have even taken the BurgerOrder yet
                    System.out.println("What is your order number?");
                    order = sc.nextInt();
                    boolean cancel = kitchen.cancelOrder(order);
                    if (cancel) {
                        System.out.println("Your order has been successfully cancelled ");
                    } else {
                        System.out.println("Sorry, we can’t find your order number in the system");
                    }
                    System.out.println();
                    break;
                case 7:
                    //Create CSV file showing all of the BurgerOrder objects from an Arraylista
                    //Implement the try catch for for two tyes of exceptions FileNotFoundException , and IOException

                    //End Program
                    System.exit(0);
                    break;
                default:
                    //In the case that the user inputs a number that is not an option
                    System.out.println("Sorry, but you need to enter a 1, 2, 3, 4, 5, 6, or a 7");

            } //end switch

        } //end while loop 
    } // end main
}// end class

