#ifndef ARRAYOUT_H
#define ARRAYOUT_H

#include <iostream>
#include <vector>
using namespace std;

#include <unistd.h>

//constant for speed of animation (time in seconds for each frame/iteration)
const int timeslice = 1;

//fn from stack overflow: https://stackoverflow.com/a/52895729/17717958
//is a function to clear console
void Clear()
{
// #if defined _WIN32
//     // system("cls");
//     clrscr(); // including header file : conio.h
// #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    // system("clear");
    cout << flush << u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
// #elif defined (__APPLE__)
//     system("clear");
// #endif
}

//function to print array
void printArr(int arr[], int size) {
    //shows previous array for set time before overwriting
    sleep(timeslice); //https://www.softwaretestinghelp.com/cpp-sleep/#:~:text=The%20sleep%20()%20function%20causes,specified%20by%20the%20function%20parameter.
    Clear();
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            cout << "▇"; //this character joins within row (full column width) but not within column
        }
        cout << " " << arr[i] << endl;
    }
    cout << flush;
}

void printArray(vector<int>& arr)
{
    //shows previous array for set time before overwriting
    sleep(timeslice); //https://www.softwaretestinghelp.com/cpp-sleep/#:~:text=The%20sleep%20()%20function%20causes,specified%20by%20the%20function%20parameter.
    Clear();
    
    for (int i = 0; i < arr.size(); i++)
    {
	for (int j = 0; j < arr[i]; j++)
        {
            cout << "▇"; //this character joins within row (full column width) but not within column
        }
        cout << " " << arr[i] << endl;
    }
    cout << flush;
}

//function to print array
void printArr1(float arr[], int size) {
    //shows previous array for set time before overwriting
    sleep(timeslice); //https://www.softwaretestinghelp.com/cpp-sleep/#:~:text=The%20sleep%20()%20function%20causes,specified%20by%20the%20function%20parameter.
    Clear();
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < arr[i]*10; j++)
        {
            cout << "▇"; //this character joins within row (full column width) but not within column
        }
        cout << " " << arr[i] << endl;
    }
    cout << flush;
}

#endif
