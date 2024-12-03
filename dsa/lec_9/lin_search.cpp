#include<iostream>
using namespace std;

bool lin_search(int arr[], int size, int key) {

    for (int i=0; i<size; i++){
        if (key==arr[i]){
            return true;
        }
    }
    return false;
}

int main(){

    int arr[5] = {1, 23, 54, 9, 32};

    bool found = lin_search(arr, 5, 32);
    
    if(found){
        cout << "Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
}