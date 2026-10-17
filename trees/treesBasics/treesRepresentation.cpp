#include<iostream>
using namespace std;

struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;

    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
};


//Preorder Transeversal Code Implementation
void preOrder(TreeNode *root){
    
    if(root == nullptr) return;

    cout<<root->val<<' ';
    preOrder(root->left);
    preOrder(root->right);
    return;
}

//inOrder Transeversal Code Implementation
void inOrder(TreeNode *root){
    
    if(root == nullptr) return;

    inOrder(root->left);
    cout<<root->val<<' ';
    inOrder(root->right);
    return;
}

//PostOrder Transeversal Code Implementation
void postOrder(TreeNode *root){
    
    if(root == nullptr) return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<' ';
    return;
}


int main(){



    return 0;
}