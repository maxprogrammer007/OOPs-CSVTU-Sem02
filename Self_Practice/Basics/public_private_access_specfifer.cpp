// exploring public and private access specifiers in C++.
//
#include<iostream>
#include<string>

using namespace std;

class employee {
    public:
        string name;
        string company;
        int age;
        void set_salary(int s) {
            salary = s;
        }
        int get_salary() {
            return salary;
        }
        int bonus() {
            return salary + salary * 0.23;
        }
    private:
        int salary;
};

int main() {
    employee emp1;
    emp1.name = "John";
    emp1.company = "Google";
    emp1.age = 25;
    emp1.set_salary(100000);
    cout << emp1.name << " works at " << emp1.company << " and earns " << emp1.get_salary() << " per annum." << endl;
    cout << "With bonus, he earns " << emp1.bonus() << " per annum." << endl;
    return 0;
}