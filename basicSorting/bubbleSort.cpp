// Bubble Sort

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

    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = n - 1; i > 0; i--){
        bool  didSwap=false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                didSwap = true;      // for optimisation for Best case scenerio (early exit)
            }
        }
        if (!didSwap){
            break;
        }
    }

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}