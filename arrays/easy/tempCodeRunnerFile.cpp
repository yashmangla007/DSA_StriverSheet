#include<iostream>
using namespace std;

void moveArrbyOne(int nums[], int n){
    int temp = nums[0];
    for(int i = 0; i<n-1; i++){
        nums[i] = nums[i+1]; 
    }
    nums[n-1] = temp;
    return;
}

int main(){ 
    int arr[]= {12, 55, 14, 8, 63, 775, 9665, 21, 85};
    int n = sizeof(arr)/sizeof(arr[0]);

    moveArrbyOne(arr, n);

    cout<<"Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}