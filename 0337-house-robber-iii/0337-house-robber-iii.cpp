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
    vector<int>solve(TreeNode*root){
        if(root==nullptr){return {0,0};}
        vector<int>left=solve(root->left);
        vector<int>right=solve(root->right);
        vector<int>res(2);
        res[0]=root->val + left[1] +right[1];
        res[1]= max(left[0],left[1]) + max(right[0],left[0]);
        return res;
    }
    int rob(TreeNode* root) {
        vector<int>v=solve(root);
        return max(v[0],v[1]);
    }
};