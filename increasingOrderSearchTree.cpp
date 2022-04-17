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
public:
    TreeNode* increasingBST(TreeNode* root){
      TreeNode* newRoot = new TreeNode(0);
      newBST(root,newRoot);
      return newRoot->right;
    }

    TreeNode* newBST(TreeNode* root,TreeNode* newRoot){
      if(root == NULL) return newRoot;
      TreeNode* n = newBST(root->left,newRoot);
      n->right = new TreeNode(root->val);
      n = n->right;
      return newBST(root->right,n);
    }

};