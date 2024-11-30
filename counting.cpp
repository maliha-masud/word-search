// Note: this code is designed to run on windows as well but so far is only tested on linux
// OS-dependant functions are sleep() and clearing screen

#include "arrayout.h"
//set speed in header file

//copy this file as template for output of array

//insert sorting algorithm here
//insert output line in end of step in the algorithm

//https://www.geeksforgeeks.org/counting-sort/
//*******************************************************
// C++ program for implementation of
// Counting sort which takes negative numbers as well

#include <algorithm>

void countSort(vector<int>& arr)
{
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int range = max - min + 1;
  
    vector<int> count(range), output(arr.size());
    for (int i = 0; i < arr.size(); i++)
        count[arr[i] - min]++;
  
    for (int i = 1; i < count.size(); i++)
        count[i] += count[i - 1];
  
    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }
  
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = output[i];
        printArray(arr);
    }
}

int main() {
    vector<int> arr = { 5, 15, 7, 3, 8, 1, 10 };
    
    //output arr first time
    printArray(arr);

    countSort(arr);

    return 0;
}
