#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){

        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        
        int x=n-i+1;
        while(x){
            cout<<"x";
            x--;
        }
        cout<<endl;
        i++;
    }
}