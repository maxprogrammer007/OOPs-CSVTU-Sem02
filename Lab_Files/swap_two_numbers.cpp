//
// Created by Administrator on 07-Apr-24.
//
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter the value of a : ";
    cin>>a;
    cout<<"enter the value of b : ";
    cin>>b;
    cout<<"after swapping the two numbers ";
    temp=a;
    a=b;
    b=temp;
    cout<<"\n a= "<<a;
    cout<<"\n b= "<<b;

    return 0;
}