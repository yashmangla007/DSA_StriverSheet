#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int val) : val(val), right(NULL), left(NULL) {}
};

class Solution {
public:
    TreeNode* buildTree(vector<int> &preorder, vector<int> &inorder){

        //Hashing:
        map<int, int> inMap;
        for(int i=0 ; i<inorder.size(); i++){
            inMap[inorder[i]] = i;
        }

        return treeMaker(preorder, inorder, 0, 
                          inorder.size()-1, 0, preorder.size()-1, inMap);
    }

    TreeNode* treeMaker(vector<int> &preorder, vector<int> &inorder,
                        int instart, int inend, int prestart, int preend,
                        map<int, int> inMap){
        
        TreeNode* root = new TreeNode(preorder[prestart]);

        int leftsize = inMap[root->val] - instart;
        int rigthsize = inend - inMap[root->val];
        
        

    }
};

int main() {
    
    return 0;
}