/*---------121. Best Time to Buy and Sell Stock--------------
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day 
in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int prevMin = prices[0], curProfit =0, maxProfit=0;
        for(int i=1; i<n; i++){
            curProfit = prices[i] - prevMin;
            if(curProfit > maxProfit) maxProfit = curProfit;
            if(curProfit<0) prevMin = prices[i];
        }
        return maxProfit;
    }
};

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    
    Solution sol;

    int ans = sol.maxProfit(arr);
    
    cout << "The majority element is: " << ans << endl;
    
    return 0;
}