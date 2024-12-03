#include<iostream>
using namespace std;

void print_array(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap_alt(int arr[], int size){

    int a = 0;
    int b = 1;

    while(b<size){
        swap(arr[b], arr[a]);
        // print_array(arr, 6);
        a = a+2;
        b = b+2;
    }
}

int main(){

    int arr[6] = {92, 7, 5, 34, -10, 6};
    int brr[5] ={2, 3, 9, 4, 5};

    swap_alt(arr, 6);
    swap_alt(brr, 5);

    print_array(arr, 6);
    cout<<endl;
    print_array(brr, 5);
}