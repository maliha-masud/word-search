// Note: this code is designed to run on windows as well but so far is only tested on linux
// OS-dependant functions are sleep() and clearing screen

#include "arrayout.h"
//set speed in header file

//copy this file as template for output of array

//insert sorting algorithm here
//insert output line in end of step in the algorithm

//https://www.geeksforgeeks.org/selection-sort/
//*******************************************************
// C++ program for implementation of
// selection sort

#include <bits/stdc++.h>

//Swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n-1; i++)
    {
       
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        if(min_idx!=i)
            swap(&arr[min_idx], &arr[i]);


        //print line:
        printArr(arr, n);
    }
}
//*******************************************************
// This is code is contributed by rathbhupendra

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);

    //output arr first time
    printArr(arr, size);

    selectionSort(arr, size);

    return 0;
}