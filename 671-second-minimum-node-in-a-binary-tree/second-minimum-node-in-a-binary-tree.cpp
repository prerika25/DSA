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
    void inorder(TreeNode* root, vector<int>&ans){
        if(root==NULL) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        int minVal = root->val;
        long secondMin = LONG_MAX;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] > minVal && ans[i] < secondMin){
                secondMin = ans[i];
            }
        }
        return (secondMin == LONG_MAX) ? -1 : secondMin;       
    }
};