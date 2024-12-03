#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i=2;

    if(n==2){
        cout<<"Prime"<<endl;
    }

    else{
        while(i<n){
            if (n%i==0){
                cout<<"Not Prime"<<endl;
                break;
            }
            else{
                cout<<"Prime"<<endl;
                break;
            }
            i++;
        }
    }
}