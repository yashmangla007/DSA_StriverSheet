#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main(){

    int arr[10] = { 55,12,54,9,2,17,84,96,722,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 1; i<n; i++){
        for (int j=i; j>0; j--){
            if(arr[j]<arr[j-1]) swap(&arr[j], &arr[j-1]);
            else break;
        }
    }

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}