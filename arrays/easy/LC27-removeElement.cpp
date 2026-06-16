/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. 
The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the 
following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. 
The remaining elements of nums are not important as well as the size of nums.
Return k.
*/

#include<bits/stdc++.h>
using namespace std;

int removeValue(vector<int> &nums, int val)
{
    int k = nums.size();
    for (int i = 0; i < k; i++)
    {
        if (nums[i] == val)
        {
            for (int j = i; j < k - 1; j++)
            {
                nums[j] = nums[j + 1];
            }
            k--;
            i--;
        }
    }
    return k;
}

int main(){

    vector<int> arr = {55,12,54,9,2,17,84,96,722,0};
    int value;
    cout<<"Enter the value: ";
    cin>>value;
    
    removeValue(arr, value);

    cout<<"\nArray:";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}