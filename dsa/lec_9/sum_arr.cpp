#include<iostream>
using namespace std;

int cal_sum(int arr[], int size){

    int sum = 0;
    for (int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){

    int size;
    cout<<"Enter the size of Array : ";
    cin>>size;
    int arr[size];

    for (int i=0; i<size; i++){
        cout<<"Enter the "<<i+1<<" element";
        cin>>arr[i];
    }

    cout<<"Recieved Array."<<endl;
    cout<<"Sum of Array = "<<cal_sum(arr, size)<<endl;

}