#include<iostream>
using namespace std;

int update(int a){
    a = a/2;
    return a;
}

int main(){
    int a = 15;
    update(a);
    cout<<a<<endl;
}