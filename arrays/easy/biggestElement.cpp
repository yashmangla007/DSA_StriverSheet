#include<iostream>
using namespace std;

int main(){

    int arr[10] = { 55,12,54,9,2,17,84,96,722,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for (int i = 1; i <n-1; i++)
    {
        if( arr[i]>max) max = arr[i];
    }

    cout<<"Biggest element = "<<max;
    

    return 0;
}