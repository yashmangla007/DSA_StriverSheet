/*
Problem Statement: Given an array that contains only 1 and 0 return the count of maximum consecutive ones
in the array.
*/

#include<iostream>
using namespace std;

int main(){

    int arr[]= {1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max =0, cnt = 0;

    for (int i = 0; i<n; i++){
        if(arr[i]==1){
            cnt++;
        }
        else{
            if(cnt>max) max=cnt;
            cnt=0;
        }
    }

    cout<<"Max consecutive 1s : "<<max;

    return 0;
}