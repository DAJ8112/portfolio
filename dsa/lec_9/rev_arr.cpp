#include<iostream>
using namespace std;


// void print_array(int arr[], int size){
//     for (int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){

//     int size = 5;
//     int arr[50000] = {1, 2, 3, 4, 5};

//     for (int i=0; i<=size/2; i++){
//         int temp = arr[i];
//         arr[i] = arr[size-i-1];
//         arr[size-i-1] = temp;
//     }

//     print_array(arr, size);

// }
void print_array(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[], int size){

    int start = 0;
    int end = size-1;

    int temp = arr[start];

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    int arr[6] = {92, 7, 5, 34, -10, 6};
    int brr[5] ={2, 3, 9, 4, 5};

    reverse(arr, 6);
    reverse(brr, 5);

    print_array(arr, 6);
    cout<<endl;
    print_array(brr, 5);   
}