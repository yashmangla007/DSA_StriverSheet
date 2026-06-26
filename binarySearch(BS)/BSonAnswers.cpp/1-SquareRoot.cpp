/*-------------Finding Sqrt of a number using Binary Search------------------
Problem Statement: You are given a positive integer n. Your task is to find and return its square root. 
If ‘n’ is not a perfect square, then return the floor value of sqrt(n).
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sqrt(int n){
        if(n==0) return 0;

        int low=1, high=n, ans=0;
        long long mid;
        while(low<=high){
            mid = low + ((high-low)/2);
            if(mid*mid==n) return mid;
            else if(mid*mid<n){
                ans=mid;
                low = mid+1;
            }
            if(mid*mid>n) high = mid-1;
        }

        return ans;
    }   
};

int main(){

    Solution obj;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    cout<<"SqareRoot("<<n<<")= "<<obj.sqrt(n);


    
    
    return 0;

}