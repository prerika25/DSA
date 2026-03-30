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
    int height(TreeNode* root){
        if(root==NULL) return 0;
        int lefth,righth;
        lefth= height(root->left);        
        righth= height(root->right);
        return max(lefth,righth)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int leftd,rightd,curr;
        leftd= diameterOfBinaryTree(root->left);        
        rightd= diameterOfBinaryTree(root->right);
        curr=height(root->left)+height(root->right);
        return max(leftd,max(rightd,curr));

    }
};