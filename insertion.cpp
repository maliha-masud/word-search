// Note: this code is designed to run on windows as well but so far is only tested on linux
// OS-dependant functions are sleep() and clearing screen

#include "arrayout.h"
//set speed in header file

//copy this file as template for output of array

//insert sorting algorithm here
//insert output line in end of step in the algorithm

//https://www.geeksforgeeks.org/insertion-sort/
//*******************************************************
// C++ program for insertion sort
  
#include <bits/stdc++.h>
  
// Function to sort an array using 
// insertion sort
void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
  
        // Move elements of arr[0..i-1],  
        // that are greater than key, to one 
        // position ahead of their 
        // current position
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 

        //print line
        printArr(arr, n);
    } 
} 
// This is code is contributed by rathbhupendra
//*******************************************************


int main() {
    int arr[] = { 12, 11, 13, 5, 6 };
    int size = sizeof(arr)/sizeof(arr[0]);

    //output arr first time
    printArr(arr, size);

    insertionSort(arr, size);

    return 0;
}