//
// Created by Administrator on 07-Apr-24.
//
#include<iostream>

using namespace std;

inline float mul(float a, float b){
    return a*b;
}

inline float div(float a, float b){
    return a/b;
}

int main(){
    float a = 10.5, b = 5.5;
    cout<<"Multiplication of "<<a<<" and "<<b<<" is: "<<mul(a,b)<<endl;
    cout<<"Division of "<<a<<" and "<<b<<" is: "<<div(a,b)<<endl;
    return 0;
}