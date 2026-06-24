#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high= n-1, mid;
        vector<int> ans = {-1, -1};
        
        while(low<=high){               //finding lower bound-ish (first occurence)
            mid = low + ((high-low)/2);

            if(nums[mid]>=target){
                ans[0] = mid;
                high = mid-1;
            }
            else low = mid+1;
        }

        low = 0; high= n-1;
        
        while(low<=high){               //finding upper bound-ish (first occurence)
            mid = low + ((high-low)/2);
            
            if(nums[mid]<=target){
                ans[1] = mid;
                low = mid+1;
            }
            else high = mid-1;
        }

        if(ans[0] == -1 || ans[1] == -1) return {-1,-1};


        if(nums[ans[0]]!=target || nums[ans[1]]!=target) return {-1,-1};
        else return ans;
    }
};

int main(){

    Solution obj;
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> ans = obj.searchRange(nums, target);

    cout<<'{'<<ans[0]<<", "<<ans[1]<<'}';
    
    return 0;

}