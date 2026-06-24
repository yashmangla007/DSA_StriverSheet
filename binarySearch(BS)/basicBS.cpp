#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int basicBS (vector<int>& nums, int target){
        int n = nums.size();
        int low = 0, high= n-1, mid;
        while(nums[low]<=nums[high]){
            mid = low + ((high - low)/2);
            if(target == nums[mid]) return mid;
            else if(target<nums[mid]) high = mid - 1;
            else if(target>nums[mid]) low = mid+1;
        }
        return -1;
    }
};

int main(){

    Solution obj;
    vector<int> nums = {-1,0,3,5,9,12};

    int target;
    cout<<"Enter Target: ";
    cin>>target;

    cout<<"Index of target is:"<<obj.basicBS(nums, target);

    return 0;

}