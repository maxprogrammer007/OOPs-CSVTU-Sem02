//
// Created by Administrator on 07-Apr-24.
//
#include<iostream>
using namespace std;

class sample
{
private:
    int data1;
    char data2;

public:
    void set(int i,char c) {
        data1 = i;
        data2 = c;

    }
    void display() {
        cout<<"Data1 = "<<data1<<"\n";
        cout<<"Data2 = "<<data2<<"\n";
    }
};

int main() {
sample *s_ptr;
    try {
        s_ptr = new sample;
    }
    catch(bad_alloc ba) {
        cout<<"Bad allocation occurred\n";
        return 1;
    }
    s_ptr->set(25,'A');
    s_ptr->display();
    delete s_ptr;
    return 0;
}