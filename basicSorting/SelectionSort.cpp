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

    int n = sizeof(arr)/sizeof(arr[0]), minIndex;

    for (int i = 0; i <=n-2; i++) {
        minIndex = i;
        for (int j = i+1; j <=n-1; j++)
        {
            if(arr[j]<arr[minIndex]) minIndex=j;
        }
        swap(&arr[i],&arr[minIndex]);        
    }
    
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}