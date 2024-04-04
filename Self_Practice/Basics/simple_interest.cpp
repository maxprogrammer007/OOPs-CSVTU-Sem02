#include<iostream>

using namespace std;
int main() {
int r,t,p,s;
cout<<"Enter the rate ";
cin>>r;
cout<<"Enter the time ";
cin>>t;
cout<<"enter the principal amount ";
cin>>p;
s = (p*r*t)/100;
cout<<s<<endl;
cout<< s + p << " : It is the final Amount "<< endl;


}