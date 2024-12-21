'''
Python Algorithms - Bubble Sort Algorithms
Author: Ayemhenre Isikheumhen
Date: 12/21/2024
References: GeeksForGeeks DSA tutorial
'''

'''
Bubble Sort Notes
Comparision based algorithm that linearly progresses through a data structure, and swaps adjacent elements.
Useful because of its simplicity in implementation, and no requiring additional memory space.
However it operates on a O(n^2) time complexity. 
'''

# Optimized Bubble Sort Code provided by GeeksForGeeks

def bubbleSort(arr):
    n = len(arr)

    # Iterating through all elements of an Array
    for i in range(n):
        swapped = False

        # range from 0 to the size of the array - current - 1
        for j in range(0, n-i-1):
            # If the current element is less than the next element
            if arr[j] > arr[j+1]:
                # Switching the elements values by their index
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True
            
            # move onto the next element if there is no change to the array
            if (swapped == False):
                break
    return arr

"""
n = len(arr)

for i in range(n)
    swapped = False

for j in range(0, n-i-1):
    if(arr[j] > arr[j+1):
        arr[j], arr[j+1] = arr[j+1], arr[j]
        swapped = True
    if (swapped == False):
        break
"""

# Testing the code above
arr1 = [64, 34, 25, 12, 22, 1, 90]
arr2 = [1, 2, 3, 4, 5, 6, 7, 8]
arr3 = [32, 25, 12, 18, 90, 57, 79]

arr1 = bubbleSort(arr1)
arr2 = bubbleSort(arr2)
arr3 = bubbleSort(arr3)

print("Array Outputs")
print(arr1)
print(arr2)
print(arr3)