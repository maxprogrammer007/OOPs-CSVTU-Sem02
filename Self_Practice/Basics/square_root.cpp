//
// Created by Administrator on 07-Apr-24.
//

#include<iostream>
#include<cmath>
using namespace std;

class square_root{
    float num;
public:
    void getdata(void);
    void display(void);
    void find_square_root(void);
};

void square_root::getdata(void){
    cout<<"Enter a number : ";
    cin>>num;
}

void square_root::display(void){
    cout<<"Number : "<<num<<"\n";
}

void square_root::find_square_root(void){
    cout<<"Square root of "<<num<<" = "<<sqrt(num)<<"\n";
}

int main() {
    square_root s;
    s.getdata();
    s.display();
    s.find_square_root();
    return 0;
}
