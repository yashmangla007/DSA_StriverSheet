#include<bits/stdc++.h>
using namespace std;

int converttoInt(string x){
    if(x =="0") return 0;
    int p2 =1 ;
    int num = 0;

    for(int i = x.length()-1; i>=0; i++){
        if(x[i]=='1') num += p2;
        p2 = p2*2;
    }

    return num;
    
}

int main(){

    string binary;
    cout<<"Enter the binary number: ";
    cin>>binary;

    cout<<binary<<" in integer = "<<converttoInt(binary);

    return 0;
}