#include<iostream>
#include "classes_storage.h"
using namespace std;


int main() {
    Hero x1;
    cout << sizeof(x1) << endl;
    Enemy y1;
    cout << sizeof(y1) << endl;

    x1.health = 100;
    x1.setName("Hero");
    x1.setLevel(5);
    x1.printName();
    x1.printHealth();
    cout << x1.getLevel() << endl;
    return 0;
}
