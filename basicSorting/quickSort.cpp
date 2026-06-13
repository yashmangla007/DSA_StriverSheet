#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}

void quickSort(int arr[], int low, int high){
    if(low>=high) return;

    int pivot = low, i = low, j = high;
    
    while(i<=j){
        while(i<=high && arr[i]<=arr[pivot]) i++;
        while(j>=low && arr[j]>arr[pivot]) j--;
        if(i<j) swap(&arr[i], &arr[j]);
    }
    swap(arr[j], arr[pivot]);
    
    quickSort(arr, low, j-1);
    quickSort(arr, j+1, high);
}

int main(){

    int arr[10] = { 55,12,54,9,2,17,84,96,722,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}