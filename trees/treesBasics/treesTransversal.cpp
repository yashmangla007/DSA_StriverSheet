#include<bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int x) : val(x), right(nullptr), left(nullptr) {}

};

void allOrders(TreeNode* root, vector<int> &preorder,
                vector<int> &inorder, 
                vector<int> &postorder){

    stack<pair<TreeNode*, int>> st;

    st.push({root,1});
    
    if(root==nullptr) return;

    while(!st.empty()){
        auto it = st.top();
        st.pop();

        if(it.second == 1){
            preorder.push_back(it.first->val);
            it.second++;
            st.push(it);

            if(it.first->left!=nullptr){
                st.push({it.first->left, 1});
            }
        }

        else if(it.second == 2){
            inorder.push_back(it.first->val);
            it.second++;
            st.push(it);

            if(it.first->right!=nullptr){
                st.push({it.first->right, 1});
            }
        }

        else{
            postorder.push_back(it.first->val);
        }
    }

}

int main(){

    return 0;
}