//
// Created by Administrator on 08-Apr-24.
//
#include<iostream>
using namespace std;
// class definition
class Circle
{
public:
    double radius;
    double compute_area()
    {
        return 3.14*radius*radius;
    }
};
int main()
{
    Circle obj;
    obj.radius = 5.0;
    cout << "Radius is: " << obj.radius << "\n";
    cout << "Area is: " << obj.compute_area() << "\n";
    return 0;
}