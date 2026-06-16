/*
Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place 
such that each unique element appears only once. The relative order of the elements should be kept the same.
If there are k elements after removing the duplicates, then the first k elements of the array should hold the 
final result. It does not matter what you leave beyond the first k elements.
*/

#include<iostream>
using namespace std;

int main(){

    int arr[] =  {0, 2, 2, 9, 9, 12, 17, 54, 55, 84, 84, 96, 722};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i+1 < n-1; i++)
    {   
        if(arr[i]==arr[i+1]){
            for(int j = i+1; j+1<n;j++){
                arr[j] = arr[j+1];
            }
            n--;
            i--;
        }
    }

    cout<<"Array:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}