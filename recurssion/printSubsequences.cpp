#include<bits/stdc++.h>
using namespace std;

void printSubsequence(int ind, vector<int> &ans, vector<int> arr){
    if(ind>=arr.size()){
        cout<<"{ ";
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<' ';
        }
        cout<<'}'<<endl;
        return;
    }
    ans.push_back(arr[ind]);
    printSubsequence(ind+1, ans, arr);
    ans.pop_back();
    printSubsequence(ind+1, ans, arr);
}

int main(){

    vector<int> arr = {3,1,2};
    vector<int> ans;
    printSubsequence(0, ans, arr);

    return 0;
}