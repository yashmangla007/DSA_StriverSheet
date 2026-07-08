#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    a = a^b;
    b = a^b;
    a = a^b;

    cout<<"a: "<<a<<" and b: "<<b;
    

    return 0;
}