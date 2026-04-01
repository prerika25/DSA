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
    void inorder(TreeNode* root,vector<int> &ans){
        if(root==NULL) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    vector<int> freq(vector<int> &ans){
        unordered_map<int,int>mp;
        vector<int>result;
        for(int i=0;i<ans.size();i++){
            mp[ans[i]]++;
        }
        int maxFreq = 0, res= -1;
        for(auto it : mp){
            if(it.second > maxFreq){
                maxFreq = it.second;
                result.clear();              
                result.push_back(it.first);
            }
            else if(it.second == maxFreq){
                result.push_back(it.first);  
            }
        }
        return result;
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        return freq(ans);        
    }
};