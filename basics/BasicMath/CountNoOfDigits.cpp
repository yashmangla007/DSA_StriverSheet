/*
Problem:  Given an integer N, return the number of digits in N.

--> ADDITIONAL THEORY:
-> To *extract* the digits of an integer N, 
    ->Way-1 (Worst)
        ones digit is:              N%10;
        tens digit is:              (N/10)%10;
        hundereds digit is:         (N/100)%10;
    
    ->Way-2 (Better):
        ones digit: N%10 ===> Then N/10;
        tens digit: N%10 ===> Then N/10.......

*/

#include<iostream>
using namespace std;

int countDigits(int num){
    int count=0;

    while (num>0)           //Time Complexity: O(log10(N)+1)
    {
        count++;
        num = num/10;
    }

    return count;    
}

int main(){

    int n;
    cout<<"Enter the N: ";
    cin>>n;

    cout<<"Number of digits in N = "<<countDigits(n);

    return 0;
}