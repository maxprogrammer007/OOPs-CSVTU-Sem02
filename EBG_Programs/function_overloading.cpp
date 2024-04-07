//
// Created by Administrator on 07-Apr-24.
//
#include<iostream>

using namespace std;

int area(int);
int area(int,int);
float area(float);

int main() {
    cout<<"Area of square with side 5 = "<<area(5)<<"\n";
    cout<<"Area of rectangle with length 5 and breadth 6 = "<<area(5,6)<<"\n";
    cout<<"Area of circle with radius 5 = "<<area(5.0f)<<"\n";
    return 0;
}

int area(int side) {
    return side*side;
}

int area(int length,int breadth) {
    return length*breadth;
}

float area(float radius) {
    return 3.14*radius*radius;
}
