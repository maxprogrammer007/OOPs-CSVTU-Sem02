//
// Created by Administrator on 08-Apr-24.
//
#include <iostream>
using namespace std;
class Student {
public:
    int id;//data member (also instance variable)
    string name;//data member(also instance variable)
    void insert(int i, string n)
    {
        id = i;
        name = n;
    }
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }
};
int main() {
    Student s1; //Creating an object of Student
    Student s2; //Creating an object of Student
    s1.insert(101, "Sonoo Jaiswal");
    s2.insert(102, "James Anderson");
    s1.display();
    s2.display();
    return 0;
}