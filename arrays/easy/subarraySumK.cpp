    /*
    ------Longest Subarray with given Sum K(Positives)-----
    Problem Statement: Given an array nums of size n and an integer k, find the length of the longest sub-array
    that sums to k. If no such sub-array exists, return 0.
    */

    #include<iostream>
    using namespace std;

    int subarrK(int nums[], int n, int k){
        int maxSub=0;
        int left = 0;
        int sum = 0;
        for(int right=0; right<n;right++){
            sum += nums[right];
            while (sum > k && left <= right)
            {
                sum -= nums[left];
                left++;
            }
            if(sum==k){
                if(maxSub<right - left+1) maxSub = right - left+1;
            }       
        }
        return maxSub;    
    }

    int main(){

        int arr[]= {10, 5, 2, 7, 1, 9};
        int k;
        cout<<"Enter k: ";
        cin>>k;
        int n = sizeof(arr)/sizeof(arr[0]);

        cout<<"Maximum Subarray range: "<<subarrK(arr, n, k);

        return 0;
    }