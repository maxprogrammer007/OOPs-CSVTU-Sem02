//
// Created by Administrator on 07-Apr-24.
//
#include<iostream>
using namespace std;

int main() {
    float amount;
    float value(float p, int n, float r = 0.15);
    void printline(char ch = '*', int len = 40);
    printline();
    amount = value(5000.00, 5);
    cout << "\n Final Value = " << amount << endl;
    amout = value(10000.00, 5, 0.30);
    cout << "\n Final Value = " << amount << endl;
    printline('=');
    return 0;

}

float value(float p, int n, float r) {
    int year = 1;
    float sum = p;
    while (year <= n) {
        sum = sum * (1 + r);
        year = year + 1;
    }
    return sum;

}

void printline(char ch, int len) {
    for (int i = 1; i <= len; i++) {
        cout << ch;
    }
    cout << "\n";
}