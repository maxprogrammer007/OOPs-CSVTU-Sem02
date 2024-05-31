#include<iostream>
using namespace std;

class Hero{
    char name[20];
    int health;
    int level;
};

int main() {
    Hero x1;
    cout << sizeof(x1) << endl;
}
