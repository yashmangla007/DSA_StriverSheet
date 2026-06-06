/*Problem:
Given an integer N, return true it is an Armstrong number otherwise return false.
*/

#include<iostream>
#include<cmath>

int countDigits(int num){
    if (num==0) return 1;
    int count=0;
    while (num>0)           //Time Complexity: O(log10(N)+1)
    {
        count++;
        num = num/10;
    }
    return count;    
}

bool isArmstrong(int x){
    int ogx = x;
    int count= countDigits(x);
    double sum =0;
    while(x!=0){
        sum += pow(x%10,count);
        x /= 10;
    }
    return sum == ogx;
}

int main(){

    int n;
    std::cout<<"Enter n: ";
    std::cin>>n;

    if(isArmstrong(n)) std::cout<<"n is an Armstrong Number";
    else std::cout<<"n is NOT an Armstrong Number";

    return 0;
}