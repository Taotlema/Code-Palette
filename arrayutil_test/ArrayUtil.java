/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package arrayutil_test;

/**
 * @author Ayemehenre Isikhuemhen
 * ITSC1212-101, Long
 * @version1
 * @since 2022-11-29
 * Project 4
 * This project manipulates the data of arrays in order to find the maximum value
 * , minimum value, and the amount of unique objects that are present.
 * 
 */

class ArrayUtil {

    private int[] intArray;

    public ArrayUtil() {
    }

    public int[] getIntArray() {
        return intArray;
    }

    public void setIntArray(int[] intArray) {
        this.intArray = intArray;
    }

    public ArrayUtil(int[] intArray) {
        this.intArray = intArray;
    }

// Minimum Value Method
    public int minValue() {
        if (intArray.length == 0) {
            return 0;
        }
        int temp = intArray[0];
        for (int i = 0; i < intArray.length; i++) {
            if (intArray[i] < temp) {
                temp = intArray[i];
            }
        }
        return temp;
    }

//Maximum Value of Array Method
    public int maxValue() {
        if (intArray.length == 0) {
            return 0;
        }
        int temp = intArray[0];
        for (int i = 0; i < intArray.length; i++) {
            if (intArray[i] > temp) {
                temp = intArray[i];
            }
        }
        return temp;
    }

//Unique Object Method
    public int countUniqueIntegers() {
        if (intArray.length == 0) {
            return 0;
        }
        int uniqueCounter = 1;
        int n = intArray.length;
        for (int i = 1; i < n; i++) {
            int j = 0;
            for (j = 0; j < i; j++) {
                if (intArray[i] == intArray[j]) {
                    break;
                }
            }
            if (i == j) {
                uniqueCounter++;
            }
        }
        return uniqueCounter;
    }

}//Class ends here

