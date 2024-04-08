//
// Created by Administrator on 08-Apr-24.
//
#include <iostream>
using namespace std;
// declare global variable
int num = 50;
int main ()
{
// declare local variable
    int num = 100;
    // print the value of the variables
    cout << " The value of the local variable num: " << num;
    // use scope resolution operator (::) to access the global variable
    cout << "\n The value of the global variable num: " << ::num;
    return 0;
}