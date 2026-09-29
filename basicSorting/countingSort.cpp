#include<iostream>
using namespace std;

void countingSort(int arr[], int n){
    int k = 0 ;
    //finding key/max
    for(int i=0; i<n; i++){
        k = max(k, arr[i]);
    }

    //making frequency array
    int farr[k+1] = {};
    for(int i=0; i<n; i++){
        farr[arr[i]]++;
    }

    //transforming frequency array
    for(int i=1; i<=k; i++){
        farr[i] += farr[i-1];
    }

    int ans[n];

    for(int i=n-1; i>=0; i--){
        ans[--farr[arr[i]]] = arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i] = ans[i];
    }

    return;
}



int main(){

    int arr[10] = { 55,12,54,9,2,17,84,96,722,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    countingSort(arr, n);

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}