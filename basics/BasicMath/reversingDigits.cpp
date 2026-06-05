/*
Problem: 
Given an integer N return the reverse of the given number.
Note: If a number has trailing zeros, then its reverse will not include them. For e.g , reverse of 10400 will 
      be 401 instead of 00401.

--> ADDITIONAL THEORY:
-> To *extract* the digits of an integer N, 
    ones digit is:              N%10;
    tens digit is:              (N/10)%10;
    hundereds digit is:         (N/100)%10;


*/

#include<iostream>
#include<cmath>

/*================================BruteForce=========================
int countDigits(int num){
    int count=0;

    while (num>0)           //Time Complexity: O(log10(N)+1)
    {
        count++;
        num = num/10;
    }

    return count;    
}

int reverseDigits(int num){
    int reversed=0, div=1, i=0, ndigits = countDigits(num);
    while (num>0) {
        reversed += ((num%10)*(std::pow(10,ndigits-i-1)));          // Number mein se digits extract
        i++;                                                        // Then *10^(totaldigitcount - og digit place)
        num = num/10;                                               // Then added it to the new number
    }

    return reversed ;
}
======================================================================*/

int reverseDigits(int num){
    int revDig=0;
    while(num!=0){          //used != instead of > for accounting for negative numbers
        revDig = revDig*10 + (num%10);      // Basically each digit extract karke, har bar usko ek ek place
        num /= 10;                          // promote kr rhe hain!!
    }
    return revDig;
}

int main(){

    int n;
    std::cout<<"Enter N: ";
    std::cin>>n;

    std::cout<<"Reversed N = "<<reverseDigits(n); 

    return 0;
}
