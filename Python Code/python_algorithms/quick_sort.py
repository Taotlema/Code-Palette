'''
Python Algorithms -  Quick Sort Algorithms
Author: Ayemhenre Isikheumhen
Date: 02/19/2025
References: GeeksForGeeks DSA tutorial
'''

'''
Quicksort Notes
This is a comparision based algorithm, that operates under the basis of divide and conquer. How this works is
that it chooses a pivot, and then creates a partion around the array. This means we have smaller arrays that 
can be evaluated and further partitioned. The algorithm repeats the process recursively.

This is great for implementing a fast algorithm for large datasets, and it's average case is On Log n.
Could also be useful for solving problems looking for the kth element.

Types of Pivots
    - Median of a list/dsa
    - Randomn element as the pivot
    - The first of last element as the pivot

Types of Partitions
    - Naive Partition: Copy the the partition array and sort it from least to greatest, then copy this array
    back into the original array.
    - Lomuto Partition: Keeps track of the index of smaller elements and keeps swapping. Very simple.
    - Haore's Partition: Traverse the array from both sides and keep swapping greater element on 
    left with smaller on the right while the array is not partitioned.
'''

# Optimized  Quicksort Code provided by GeeksForGeeks

# partition function
def partition_1(arr, low, high):
    # choose the pivot
    pivot = arr[high]

    # Index of smaller element (right position for found pivots)
    i = low - 1

    # Traverse array while moving smaller elements to the left
    for j in range(low, high):
        if arr[j] < pivot: 
            i += 1
            swap(arr, i, j)
    
    # Move pivot after smaller elements, and return to original position
    swap(arr, i, j)
    return i + 1

    # Swap function
    def swap_1(arr, low, high):
        arr[i], arr[j] = arr[j], arr[i]

    # Quicksort algorithm
    def quicksort(arr, low, high):

        if low < high:
            pi = partition(arr, low, high)

        # Recursion calls for smaller elements and greater or equals elements
        quickSort(arr, low, pi - 1)
        quickSort(arr, pi + 1, high)

# Testing the code above

if __name__ == "__main__":
    arr = [10, 7, 8, 9, 1, 5]
    n = len(arr)

    quickSort(arr, 0, n - 1)
    
    for val in arr:
        print(val, end=" ") 