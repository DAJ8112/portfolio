#include<iostream>
using namespace std;

int fact(int number){
    if(number==0){return 1;}
    int ans=1;
    for(int i=1; i<=number;i++){
        ans = ans * i;
    }
    return ans;
}

int nCr(int a, int b){
    int combination = fact(a)/(fact(b)*fact(a-b));
    return combination;
}

int main(){

    int n, r;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    cout<<"Enter the value of r:" <<endl;
    cin>>r;

    cout<<"Answer = "<<nCr(n, r)<<endl;
}