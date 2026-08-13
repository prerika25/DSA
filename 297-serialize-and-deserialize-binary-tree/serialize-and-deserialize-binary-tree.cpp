/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void solve(TreeNode* root,string &s){
        if(root==NULL){
            s+="N ";
            return;
        }
        s+=to_string(root->val)+" ";
        solve(root->left,s);
        solve(root->right,s);
    }

    string serialize(TreeNode* root) {
        string s;
        solve(root,s);
        return s;
    }

    TreeNode* solve2(stringstream &ss){
        string x;
        ss>>x;
        if(x== "N") return NULL;
        TreeNode* root=new TreeNode(stoi(x));
        root->left=solve2(ss);
        root->right=solve2(ss);
        return root;
    }

    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return solve2(ss);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));