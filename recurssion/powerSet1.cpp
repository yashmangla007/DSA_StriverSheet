#include<bits/stdc++.h>
using namespace std;

/*
Subset Sum : Sum of all Subsets
Problem Statement: Given an array print all the sum of the subset generated from it, in the increasing order.
*/

void pSumSubset(vector<int> nums){
    int n = nums.size();

    for(int i=0; i<(1<<n); i++){

        int sum = 0;

        for(int p=0; p<n; p++){
            if(i&(1<<p)) sum+= nums[p];
        }

        cout<<sum<<", ";

    }
}

int main(){

    vector<int> arr = {5,2,1};

    pSumSubset(arr);

    return 0;
}