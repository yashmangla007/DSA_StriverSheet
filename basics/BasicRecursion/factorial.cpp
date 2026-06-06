/*
To obtain the factorial of a number, it has to be multiplied by all the whole numbers preceding it. 
More precisely X! = X*(X-1)*(X-2) … 1.
*/

#include<iostream>
using namespace std;

int factorial(int x){
    if(x==1||x==0) return 1;
    else if(x<=0) return 0;
    return x*factorial(x-1);
}

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    if(n>=0) cout<<n<<"! = "<<factorial(n);
    else cout<<n<<"! = Not Defined";

    return 0;
}