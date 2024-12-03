#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    while (start<=end){
        
        int mid = start + (end-start)/2;  // this is just rearranged of (start+end)/2 and is done to avoid out of range errors 

        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid]<key){
            start = mid+1;
        }

        else{
            end = mid-1;
        }

        mid = start + (end-start)/2;
    }
    return -1;

}

int main(){

    int odd_arr[5] = {10, 23, 34, 66, 344};
    int even_arr[6] = {2, 4, 5, 7, 11, 19};

    cout << "search 344 " << binary_search(odd_arr, 5, 344)<<endl;
    cout << "search 5 " << binary_search(even_arr, 6, 5)<<endl;
}