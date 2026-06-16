/*
Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the 
end of the array and move non-negative integers to the front by maintaining their order.
*/

#include<iostream>
using namespace std;

void removeZeros(int nums[], int n){
    
    for(int i = 0; i<n; i++){
        if (nums[i]==0){
            for (int j = i+1; j < n; j++)
            {
                nums[j-1]=nums[j];
            }
            i--;
            n--;
        }
    }

    return;
}

int main(){ 
    int arr[]= {12, 55, 0, 14, 8, 0, 63, 775, 0, 0, 9665, 21, 0, 85, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    removeZeros(arr, n);

    cout<<"Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}