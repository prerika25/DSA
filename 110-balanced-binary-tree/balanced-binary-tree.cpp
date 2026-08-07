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
    int maxDepth(TreeNode* root) {
        if(root==NULL) return true;
        int leftdepth;
        int rightdepth;
        leftdepth= maxDepth(root->left);
        rightdepth= maxDepth(root->right);
        return max(leftdepth,rightdepth)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        if(abs(right-left)>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};