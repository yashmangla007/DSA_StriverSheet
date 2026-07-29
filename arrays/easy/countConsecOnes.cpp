#include<bits/stdc++.h>
using namespace std;

int countMaxCosecutiveOnes(vector<int> nums){
    int stcount =0, max =0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] ==1){
            stcount++;
        }
        else {
            if(stcount>max) max = stcount;
            stcount = 0;
        }
    }
    return max;
}

int main(){
    
    vector<int> nums = {1, 0, 1, 1, 0, 1};
    cout<<"Max number of ones: "<< countMaxCosecutiveOnes(nums);

    return 0;
}