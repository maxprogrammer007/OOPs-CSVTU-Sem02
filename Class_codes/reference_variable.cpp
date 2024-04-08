//
// Created by Administrator on 08-Apr-24.
//
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int& ref = x; // Reference variabl 'ref' referring to 'x'
    cout << "x = " << x << endl; // Output: x = 10
    cout << "ref = " << ref << endl; // Output: ref = 10
    // Modifying 'x' indirectly through reference variable 'ref'
    ref = 20;
    cout << "x = " << x << endl; // Output: x = 20
    cout << "ref = " << ref << endl; // Output: ref = 20

    return 0;
}