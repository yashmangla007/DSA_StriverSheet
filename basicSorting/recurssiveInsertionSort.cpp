#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

void recInsertionSort(int arr[], int n){
    if(n==1) return;

    int j = 0, didswap= 0;
    while(j<n){
        if(arr[j]<arr[j-1]){
            swap(&arr[j], &arr[j-1]);
            j++;
            didswap++;
        }
        else break;
    }

    if(didswap == 0) return;

    recInsertionSort(arr, n+1);
    return;
}

int main(){

    int arr[10] = { 55,12,54,9,2,17,84,96,722,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    recInsertionSort(arr, 2);

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}