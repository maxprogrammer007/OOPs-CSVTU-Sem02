//
// Created by Administrator on 07-Apr-24.
//
#include<iostream>
using namespace std;

int main() {
    float number1,number2,sum,avgerage;

    cout<<"Enter Two numbers: ";
    cin>>number1;
    cin>>number2;

    sum = number1 + number2;
    avgerage = sum/2;

    cout<<"Sum of "<<number1<<" and "<<number2<<" is: "<<sum<<endl;
    cout<<"Average of "<<number1<<" and "<<number2<<" is: "<<avgerage<<endl;

    return 0;
}