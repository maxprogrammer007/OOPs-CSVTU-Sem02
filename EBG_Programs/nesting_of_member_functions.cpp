//
// Created by Administrator on 07-Apr-24.
//
#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;

public:
    void read(void){
        cout<<"Enter a binary number : ";
        cin>>s;
    }
    void chk_bin(void){
        for(int i=0;i<s.length();i++){
            if(s.at(i)!='0' && s.at(i)!='1'){
                cout<<"Incorrect binary format\n";
                exit(0);
            }
        }
    }

    void ones_compliment(void){
        chk_bin();
        for(int i=0;i<s.length();i++){
            if(s.at(i)=='0'){
                s.at(i)='1';
            }
            else{
                s.at(i)='0';
            }
        }
    }

    void display(void){
        cout<<"Displaying binary number : ";
        for(int i=0;i<s.length();i++){
            cout<<s.at(i);
        }
        cout<<"\n";
    }
};

int main() {
    binary b;
    b.read();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}