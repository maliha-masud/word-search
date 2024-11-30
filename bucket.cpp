// Note: this code is designed to run on windows as well but so far is only tested on linux
// OS-dependant functions are sleep() and clearing screen

#include "arrayout.h"
//set speed in header file

//copy this file as template for output of array

//insert sorting algorithm here
//insert output line in end of step in the algorithm

//https://www.geeksforgeeks.org/bucket-sort-2/
//*******************************************************
// C++ program to sort an 
// array using bucket sort
#include <algorithm>
  
// Function to sort arr[] of 
// size n using bucket sort
void bucketSort(float arr[], int n)
{
    // 1) Create n empty buckets
    vector<float> b[n];
  
    // 2) Put array elements 
    // in different buckets
    for (int i = 0; i < n; i++) {
        int bi = n * arr[i]; // Index in bucket
        b[bi].push_back(arr[i]);
    }
  
    // 3) Sort individual buckets
    for (int i = 0; i < n; i++)
        sort(b[i].begin(), b[i].end());
  
    // 4) Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < b[i].size(); j++)
        {
            arr[index++] = b[i][j];
            printArr1(arr, n);
        }
    }
}

int main() {
    float arr[] = { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 };
    int size = sizeof(arr) / sizeof(arr[0]);

    //output arr first time
    printArr1(arr, size);

    bucketSort(arr, size);
 
    return 0;
}
