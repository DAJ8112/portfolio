#include<iostream>
using namespace std;

bool isEven(int a){

    // switch(a%2){
    //     case 0:
    //         return true;
    //         break;

    //     default:
    //         return false;
    //         break;
    // }
    if(a&1){
        return false;
    }
    return true;
}

int main(){
    int number;
    cout<<"enter the number : "<<endl;
    cin>>number;
    bool answer = isEven(number);
    if (answer==true){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}