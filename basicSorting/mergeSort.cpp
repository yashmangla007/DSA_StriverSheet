#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    vector<int> temp;
    int i=low, j=mid+1;
    while( i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }
    
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    for(int x=low; x<=high; x++){
        arr[x] = temp[x-low];
    }

}

void mergeSort(int arr[], int low, int high ){
    if(low>=high) return;    // Base condition

    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){ 

    int arr[10] = { 55,12,54,9,2,17,84,96,722,0};
    int n = sizeof(arr)/sizeof(arr[0]), minIndex;

    mergeSort(arr, 0, n-1);
    
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}