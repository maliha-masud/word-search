// Note: this code is designed to run on windows as well but so far is only tested on linux
// OS-dependant functions are sleep() and clearing screen

#include "arrayout.h"
//set speed in header file

//copy this file as template for output of array

//insert sorting algorithm here
//insert output line in end of step in the algorithm

//--link to algorithm
//*******************************************************
//--algorithm
//*******************************************************

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    //output arr first time
    printArr(arr, size);

    //************to be replaced
    //sample manipulation of array, will be replaced with one iteration of sorting algorithm
    for (int i = 0; i < 5; i++)
    {
        arr[i] += i;
    }
    
    //output arr, after manip
    printArr(arr, size); //this is the print line to copy into algorithm, parameters may be named differently
    //************replace with call to the sorting algorithm

    return 0;
}