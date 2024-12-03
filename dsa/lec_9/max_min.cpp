#include<iostream>
#include<climits>
using namespace std;


int getMax(int arr[], int size){

    int max_val = INT_MIN;

    for(int i=0; i<size; i++){
        max_val = max(max_val, arr[i]);
    }
    return max_val;
    
}

int main(){

    int arr[5] = {2, 40, 66, 9, 23};
    int max = arr[0];
    int min = arr[0];

    for(int i=0; i<5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Minimum = "<<min<<endl;
    cout<<"Maximum = "<<max<<endl;

    cout <<"Using max function = "<< getMax(arr, 5)<<endl;
}