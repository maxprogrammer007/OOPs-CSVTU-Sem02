// implementing string types in C++
// //
#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "John";
    cout << "My name is " << name << endl;
    cout << "My name is " << name.length() << " characters long" << endl;
    cout << "The first character of my name is " << name[0] << endl;    
    cout << "The last character of my name is " << name[name.length()-1] << endl;
    cout << sizeof(name) << endl;
    cout << name.append(" Abhinav") << endl;
    return 0;
}