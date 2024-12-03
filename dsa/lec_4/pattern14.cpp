#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    char cnt='A'+i-1;

    while(i<=n){
        int j=1;
        // char ch=i;
        while(j<=i){
            cout<<char('A'+i+j-2);
            // ch++;
            j++;
        }
        cout<<endl;
        i++;

    }
}