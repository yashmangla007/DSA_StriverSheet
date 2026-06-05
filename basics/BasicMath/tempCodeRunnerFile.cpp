/*
Problem:  Given an integer N, return the number of digits in N.
*/

#include<iostream>
using namespace std;

int main(){

    int N, rem=10, count;
    cout<<"Enter the N: ";
    cin>>N;

    while (N%rem >0)
    {
        count++;
    }

    cout<<"N has "<<count<<" Digits";
    

    return 0;
}