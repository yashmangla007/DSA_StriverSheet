/*
Problem Statement: Given an array, find the second smallest and second largest element in the array. 
Print ‘-1’ in the event that either of them doesn’t exist.
*/ 

#include<iostream>
using namespace std;

int main(){

    int arr[10] = { 55,12,54,9,2,17,84,96,722,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0], secmax= arr[0], secmin= arr[0], min;
    for (int i = 1; i <n-1; i++)
    {
        if( arr[i]>max) {
            secmax = max;
            max = arr[i];
        }
        if( arr[i]<max) {
            secmin = min;
            min = arr[i];
        }
    }

    cout<<"2nd Biggest element = "<<secmax;
    cout<<"\n2nd Smallest element = "<<secmin;
    

    return 0;
}