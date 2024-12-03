#include<iostream>
using namespace std;

int count_nos(int arr[], int size, int key){
    int count = 0;
    for(int i=0; i<size; i++){
        if (arr[i]==key){
            count++;
        }
    }
    return count;
}


int main(){
    int occurence = 1;

    int arr[6] = {1,2,2,1,1,3};
    
    for(int i=0; i<size; i++){
        occurence = count_nos(arr, 6, arr[i]);
        
    }

}
