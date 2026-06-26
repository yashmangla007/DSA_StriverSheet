/*-------------Nth Root of a Number using Binary Search------------------
Problem Statement: Given two numbers N and M, find the Nth root of M. The nth root of a number M is defined 
as a number X when raised to the power N equals M. If the 'nth root is not an integer, return -1.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nthrt(int m, int n){
        if(m==0) return 0;

        int low=1, high=m, ans=0;
        long long mid, x=1;
        while(low<=high){
            mid = low + ((high-low)/2);
            x=1;
            for(int i=0; i<n; i++) x *= mid;
            if(x==m) return mid;
            else if(x<m){
                ans=mid;
                low = mid+1;
            }
            if(x>m) high = mid-1;
        }

        return ans;
    }   
};

int main(){

    Solution obj;
    int m, n;
    cout<<"Enter m: ";
    cin>>m;

    cout<<"Enter n: ";
    cin>>n;

    cout<<n<<"th Root of "<<m<<" = "<<obj.nthrt(m, n);


    
    
    return 0;

}