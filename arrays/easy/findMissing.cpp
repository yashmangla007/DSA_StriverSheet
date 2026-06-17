/*
Problem Statement: Given an array arr[] of size n-1 with distinct integers in the range of [1, n]. 
This array represents a permutation of the integers from 1 to n with one element missing. Find the missing 
element in the array.
*/

#include<iostream>
using namespace std;

int main(){

    int arr[] = { 1, 5, 8, 6, 7, 3, 4};
    int n= sizeof(arr)/sizeof(arr[0]), sum =0;

    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    n+=1;
    int missing = ((n/2)*(n+1)) - sum;

    cout<<"Missing element = "<<missing;


    return 0;
}