//
// Created by Administrator on 03-Jun-24.
//
#include<iostream>
#include"classes_storage.h"
using namespace std;

int main() {
    // static allocation
    Hero x1;
    //dynamic allocation
    Hero *x2 = new Hero;
    cout << sizeof(x1) << endl;
    cout << sizeof(*x2) << endl;
    x1.setLevel(5);
    x2->setLevel(10);
    cout<<"level is "<< x1.getLevel()<<endl;
    cout << "Level is " <<x2->getLevel() << endl;

}