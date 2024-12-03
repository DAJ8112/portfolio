#include<iostream>
using namespace std;

int main(){

    char ch;
    cout << "Enter the character - ";
    cin >> ch;

    if(int(ch)>=97 && int(ch)<=122){
        cout<<"Lowercase - a and z"<<endl;
    }
    else if(int(ch)>=65 && int(ch)<=90){
        cout<<"Uppercase - A and Z"<<endl;
    }
    else if(int(ch)>=48 && int(ch)<=57){
        cout<<"Numeric"<<endl;
    }
}