// implementing do while loops in C++
// //
#include <iostream>
using namespace std;

int main () {
    int i = 1;
    do {
        cout << i << endl;
        i++;
    } while (i <= 5);
    cout << "Loop ends here" << endl;
}