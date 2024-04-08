//
// Created by Administrator on 08-Apr-24.
//
#include <iostream>
using namespace std;
int main()
{
    int *arr; int size;
    cout<< "enter the size of the integer array:" ;
    cin>> size ;
    cout<< "the size of integer array is: " <<size ;
    arr = new int[size];
    cout<<"dynamic allocation is done" ;
    return 0;
}