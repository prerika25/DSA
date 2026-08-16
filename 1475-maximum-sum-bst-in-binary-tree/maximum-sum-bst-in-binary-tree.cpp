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
    int ans = 0;

    // {isBST, min, max, sum}
    vector<int> solve(TreeNode* root) {
        if (!root)
            return {1, INT_MAX, INT_MIN, 0};

        vector<int> L = solve(root->left);
        vector<int> R = solve(root->right);

        // Check if current subtree is BST
        if (L[0] && R[0] && L[2] < root->val && root->val < R[1]) {
            int sum = L[3] + R[3] + root->val;
            ans = max(ans, sum);

            int mn = min(L[1], root->val);
            int mx = max(R[2], root->val);

            return {1, mn, mx, sum};
        }

        // Not a BST
        return {0, 0, 0, 0};
    }

    int maxSumBST(TreeNode* root) {
        solve(root);
        return ans;
    }
};