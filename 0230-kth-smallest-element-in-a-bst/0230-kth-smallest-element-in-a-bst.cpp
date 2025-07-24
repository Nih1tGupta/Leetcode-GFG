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
    void solve(TreeNode*root,int &ans,int &ct,int k){
        if(root==nullptr)return;
        solve(root->left,ans,ct,k);
        ct++;
        if(ct==k){ans=root->val;return;}
        solve(root->right,ans,ct,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans=0;int ct=0;
        solve(root,ans,ct,k);
        return ans;
    }
};