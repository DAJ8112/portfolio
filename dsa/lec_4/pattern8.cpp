#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i =1;
    int asc = 65;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<(char)asc;
            j++;
        }
        cout<<endl;
        asc++;
        i++;
    }
}