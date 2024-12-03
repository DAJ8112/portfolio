#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;

    int i=1;
    while(i<=n){
        int j=1;
        int ctr=1;
        while(j<=i){
            while(ctr<=n-i){
                cout<<" ";
                ctr++;
            }
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}



// M-2

int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        int j=1;
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}