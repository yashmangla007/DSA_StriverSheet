/*
Find the number that appears once, and the other numbers twice
Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. 
Find that single one.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the single non-repeating element using XOR
    int getSingleElement(vector<int>& arr) {
        int n = arr.size();
        int xorr = 0;

        // XOR all elements. Duplicates cancel out, leaving the single element.
        for (int i = 0; i < n; i++) {
            xorr = xorr ^ arr[i];
        }

        return xorr;
    }
};

int main() {
    vector<int> arr = {4, 1, 2, 1, 2};

    Solution obj;
    int ans = obj.getSingleElement(arr);

    cout << "The single element is: " << ans << endl;

    return 0;
}
