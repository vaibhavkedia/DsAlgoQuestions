#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    vector<int>vec;
public:
    int kthSmallest(TreeNode* root, int k) {
        if(root == NULL) return NULL;
        inorder(root);
        
        return vec.at(k-1);
        
    }
    
    void inorder(TreeNode* root){
        if(root == NULL) return;
        inorder(root->left);
        vec.push_back(root->val);
        inorder(root->right);
    }
};