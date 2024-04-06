#include<iostream>

using namespace std;

class SI{
    public:
    float p;
    float r;
    float t;
    float si;
    float amount;
    void calculate_SI(int p,int r,int t){
        si = (p*r*t)/100;
        amount = p + si;
        cout << "Simple Interest: " << si << endl;
        cout << "Amount: " << amount << endl;
    }
};

int main(){
    SI Abhinav;
    cout << "Enter the principal, rate and time: ";
    cin >> Abhinav.p >> Abhinav.r >> Abhinav.t;
    Abhinav.calculate_SI(Abhinav.p,Abhinav.r,Abhinav.t);
    return 0;
}