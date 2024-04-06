// exploring class member functions in C++.

#include<iostream>
#include<string>
using namespace std;

class Human {
    public:
        string name;
        int age;
        void introduce() {
            cout << "Hello, my name is " << name << " and I am " << age << " years old" << endl;
        }
};

int main() {
    Human human1;
    human1.name = "John";
    human1.age = 25;
    human1.introduce();
    return 0;
}
// Output: Hello, my name is John and I am 25 years old