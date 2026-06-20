/*---------LC169-Majority Element--------------
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority 
element always exists in the array.
*/
//========================================================================================================

/* -------------------------Approach-1 (better approach - using hashmap)------------------------------
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> map;

        for(int i=0; i<n; i++){
            ++map[nums[i]];
            if (map[nums[i]]>n/2) return nums[i];   //exits the function as soon as the majority element is found
        }

        return -1;
    }
};

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    
    Solution sol;

    int ans = sol.majorityElement(arr);
    
    cout << "The majority element is: " << ans << endl;
    
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate= 0, count =0;
        
        for(int i=0; i<n; i++){
            if(count==0) candidate = nums[i];   
            if(nums[i]==candidate) count++;
            else count--;
            if(count>n/2) return candidate;     // incase all are consecutive.
        }

        return candidate;
    }
};

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    
    Solution sol;

    int ans = sol.majorityElement(arr);
    
    cout << "The majority element is: " << ans << endl;
    
    return 0;
}
