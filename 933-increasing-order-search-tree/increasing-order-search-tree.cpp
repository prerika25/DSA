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
    TreeNode* helper(vector<int>&ans,int st,int end){
        if(st>end) return NULL;        
        TreeNode* root=new TreeNode(ans[st]);
        TreeNode* left=NULL;
        st++;
        root->right=helper(ans,st,end);
        return root;
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>ans;
      
        inorder(root,ans);
        return helper(ans,0,ans.size()-1);
    }
};