/*      Problem:
Given two integers N1 and N2, find their greatest common divisor.
*/

#include<iostream>
using namespace std;

/*===================BruteForce=================
int smaller(int x, int y){
    if(x>y) return y;
    else return x;
}

int findgcd(int x, int y){
    int gcd;
    for(int i=2 ; i<smaller(n1, n2)/2;i++){
        if(n1%i==0 && n2%i == 0) gcd =i;
    }
    return gcd;
}
*/

int findgcd(int x, int y){
    while(x!=0 || y!=0){
        if(x>y){
            x = x%y;
        }
        if(y>=x){
            y= y%x;
        }
    }

    if(x==0) return y;
    else return x;
}

int main(){

    int n1, n2;

    cout<<"n1: ";
    cin>>n1;
    cout<<"n2: ";
    cin>>n2;

    cout<<"GCD ("<<n1<<", "<<n2<<"): "<<findgcd(n1, n2);

    return 0;
}