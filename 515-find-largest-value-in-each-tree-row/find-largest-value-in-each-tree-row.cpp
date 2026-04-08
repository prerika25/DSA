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
    vector<vector<int>> levelOrder(TreeNode* root,vector<vector<int>>&ans) {
        if(root == NULL) return ans;
        queue<TreeNode* >q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                level.push_back(node->val); 
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }            
            ans.push_back(level);
        }
        return ans;
    }
    vector<int> largestValues(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrder(root,ans);
        int maximum=INT_MIN;
        vector<int> result;
        for(int i = 0; i < ans.size(); i++){
            int maximum = INT_MIN;
            for(int j = 0; j < ans[i].size(); j++){
                maximum = max(maximum, ans[i][j]);  // FIX
            }
        result.push_back(maximum);
        }

    return result;
        
    }
};