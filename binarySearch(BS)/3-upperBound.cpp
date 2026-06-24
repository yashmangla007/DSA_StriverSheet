/*-------------Implement Upper Bound------------------
Problem Statement: Given a sorted array of N integers and an integer x, write a program to find the upper
                   bound of x.
-->ANUVAAD: Sabse choti index jiski value x se badi ho
What is Upper Bound?
The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that 
index is greater than the given key i.e. x.
The upper bound is the smallest index, ind, where arr[ind] > x.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int upperBound(vector<int>& nums,int x){
        int n = nums.size();
        int low= 0, high= n-1, mid, ans=n;
        while(low<=high){
            mid = low+((high-low)/2);
            if(nums[mid]> x){  // we will have to eliminate the right half
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;   
    }
};

int main(){

    Solution obj;
    vector<int> nums = {3,5,6,8,12,15,19};

    int target = 9;
    
    cout<<"Index of LowerBound = "<<obj.upperBound(nums, target);
    
    return 0;

}