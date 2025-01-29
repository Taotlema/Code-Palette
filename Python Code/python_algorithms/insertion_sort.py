'''
Python Algorithms - Insertion Sort Algorithms
Author: Ayemhenre Isikheumhen
Date: 01/28/2025
References: GeeksForGeeks DSA tutorial
'''

'''
Insertion Sort Notes
Iteratively inserts each element of an unsorted list into its correct position. Compares elements and 
swaps or moves them around while iterating through the datastruture. It's best case is O(n), but
worst case is O(n^2) if dsa is random.
'''

# Optimized Insertion Sort Code provided by GeeksForGeeks

def insertionSort(arr):

    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1

        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

        
