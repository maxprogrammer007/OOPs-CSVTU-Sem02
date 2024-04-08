//
// Created by Administrator on 08-Apr-24.
//
#include<iostream>
using namespace std;
class Circle
{
// private data member
private:
    double radius;
// public member function
public:
    double compute_area()
    { // member function can access private
// data member radius
        return 3.14*radius*radius;
    }
};

int main()
{
    Circle obj;
    // trying to access private data member
    // directly outside the class
    obj.radius = 5.5; //error
    cout << "Radius is: " << obj.radius << "\n";
    cout << "Area is: " << obj.compute_area() << "\n";
    return 0;
}