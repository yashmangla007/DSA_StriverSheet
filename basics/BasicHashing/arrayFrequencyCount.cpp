/*      Probelem:  
Problem Statement: Given an array, we have found the number of occurrences of each element in the array.

Theory:     --std::unordered_map<int,int> hashmap;---
            -> hasmap[i] => i==key and hashmap[i]==value at key i 

*/

#include<bits/stdc++.h>

void countFrequency(int ar[], int x){
    std::unordered_map<int,int> hashmap;

    //Computing the hashmap
    for(int i =0; i<x; i++){        // Making it iterate the entire array once
        hashmap[ar[i]]++;   // = (hashmap[--])++
    }

    //Printing the frequency
    for(auto it : hashmap){
        std::cout<<it.first<<" -> "<<it.second<<'\n';
    }

    return;
}   

int main(){

    int ar[] = {10, 5, 10, 15, 10, 5, 12, 22, 42, 432, 22, 2};     //given array
    
    int n = sizeof(ar)/sizeof(ar[0]);       //finding number of elements n;

    countFrequency( ar, n);   //calling the frequency count function    

    return 0;
}

// TC = O(N)    -> Worst case!!
// SC = O(N)