/*-------------Implement Lower Bound------------------
Problem Statement: Given a sorted array of N integers and an integer x, write a program to find the lower 
                   bound of x.

What is lower bound?
The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that 
index is greater than or equal to a given key i.e. x.
The lower bound is the smallest index, ind, where arr[ind] >= x. But if any such index is not found, the 
lower bound algorithm returns n i.e. size of the given array.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lowerBound(vector<int>& nums,int x){
        int n = nums.size();
        int low= 0, high= n-1, mid, ans=n;
        while(low<=high){
            mid = low+((high-low)/2);
            if(nums[mid]>= x){  // we will have to eliminate the left half
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
    vector<int> nums = {3,5,8,15,19};

    int target = 9;
    
    cout<<"Index of LowerBound = "<<obj.lowerBound(nums, target);
    
    return 0;

}