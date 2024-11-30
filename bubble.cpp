// Note: this code is designed to run on windows as well but so far is only tested on linux
// OS-dependant functions are sleep() and clearing screen

#include "arrayout.h"
//set speed in header file

//copy this file as template for output of array

//insert sorting algorithm here
//insert output line in end of step in the algorithm

//https://www.geeksforgeeks.org/bubble-sort/
//*******************************************************
// C++ program for implementation
// of Bubble sort
#include <bits/stdc++.h>
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
 
        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
                
        
        printArr(arr, n);        
    }
}
// This code is contributed by rathbhupendra
//*******************************************************

int main() {
    int arr[] = { 5, 1, 4, 2, 8};
    int size = sizeof(arr)/sizeof(arr[0]);

    //output arr first time
    printArr(arr, size);

    bubbleSort(arr, size);

    return 0;
}