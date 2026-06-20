/*  -------LC75-> Sort colors---------
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same 
color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int n = nums.size();
        int low= 0, mid= 0, high= n-1;
        while(mid<=high){   // --> used while loop
            if(nums[mid] == 1) mid++;
            else if(nums[mid] ==0){
                //swap(nums[mid], nums[low])
                int temp = nums[mid];
                nums[mid] =nums[low];
                nums[low] = temp;
                low++;
                mid++;
            }
            else if(nums[mid] ==2){
                //swap(nums[mid], nums[low])
                int temp = nums[mid];
                nums[mid] =nums[high];
                nums[high] = temp;

                high--;
            }
        }

    }
};

int main(){

    Solution obj;
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    obj.sortZeroOneTwo(nums);

    for (int val : nums)
        cout << val << " ";

    return 0;

}