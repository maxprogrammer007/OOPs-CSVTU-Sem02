//
// Created by Administrator on 07-Apr-24.
//
#include<iostream>
using namespace std;

int main(){
    int *arr;
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    arr = new int[size];
    cout<<"Enter elements of array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    delete arr;
    return 0;
}