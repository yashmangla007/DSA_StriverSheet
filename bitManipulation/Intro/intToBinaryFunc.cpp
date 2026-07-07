#include<bits/stdc++.h>
using namespace std;

string converttoBinary(int x){
    if(x ==0) return "0";

    string binary = "";
    while( x > 0){
        if(x%2==1) binary +='1';
        else binary += '0';
        x = x/2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main(){

    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<num<<" in Binary = "<<converttoBinary(num);

    return 0;
}