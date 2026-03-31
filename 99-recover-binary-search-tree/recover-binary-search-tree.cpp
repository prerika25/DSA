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
    void inorderStore(TreeNode* root, vector<int>& ans) {
        if(!root) return;
        inorderStore(root->left, ans);
        ans.push_back(root->val);
        inorderStore(root->right, ans);
    }
    void inorderFix(TreeNode* root, vector<int>& ans, int &i) {
        if(!root) return;
        inorderFix(root->left, ans, i);
        root->val = ans[i++];
        inorderFix(root->right, ans, i);
    }
    void recoverTree(TreeNode* root) {
        vector<int> ans;
        inorderStore(root, ans);
        sort(ans.begin(), ans.end());        
        int i = 0;
        inorderFix(root, ans, i);
    }
};
    