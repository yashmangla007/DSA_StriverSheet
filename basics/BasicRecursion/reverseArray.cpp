/*
Problem Statement: You are given an array. The task is to reverse the array and print it.
*/

#include<iostream>
#include<vector>
using namespace std;

void reverserArray(auto p1, auto p2){
    if (p1>=p2) return;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    reverserArray(++p1, --p2);      // p1++ => will pass old value and then increment
    return;
}

int main(){
    
    int n, input;
    cout<<"Enter number of elements in the array: ";
    cin>>n;
    vector<int> ar;
    cout<<"Enter the numbers: ";
    for(int i=0; i<n; i++){
        cin>>input;
        ar.push_back(input);    
    }

    auto it1 = ar.begin();
    auto it2 = ar.end()-1;

    reverserArray(it1, it2);

    cout<<"Reversed array:  ";
    for(auto it=ar.begin(); it!=ar.end(); it++){
        cout<<*it<<' ';
    }

    return 0;
}