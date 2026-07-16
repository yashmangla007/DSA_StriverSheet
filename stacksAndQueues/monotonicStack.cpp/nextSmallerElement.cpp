#include<bits/stdc++.h>
using namespace std;

vector<int> findNse(vector<int> nums){
    int n= nums.size();
    stack<int> nse;
    vector<int> ans(n);
    
    for(int i =n-1; i>=0; i--){
        while(!nse.empty() && nums[i]<=nse.top()){
            nse.pop();
        }
        if(nse.empty()) ans[i] = -1;
        else ans[i] = nse.top();

        nse.push(nums[i]);
    }

    return ans;
}


int main(){

    vector<int> nums = {4, 8, 5, 2, 25};
    
    vector<int> nse = findNse(nums);

    cout<<'{';
    for(int i=0; i<nse.size(); i++){
        cout<<nse[i]<<", ";
    }
    cout<<'}';

    return 0;
}