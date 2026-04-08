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
    int maxLevelSum(TreeNode* root) {
        vector<vector<int>>ans;
        levelOrder(root,ans);
        int maxSum=INT_MIN;
        int levelNum = 0;
        int result = 0;
        for(int i = 0; i < ans.size(); i++){
            int sum = 0;
            for(int j = 0; j < ans[i].size(); j++){
                sum += ans[i][j]; 
            }
            if(sum > maxSum){
                maxSum = sum;
                result = i + 1;  
            }
        }

    return result;

        
    }
};