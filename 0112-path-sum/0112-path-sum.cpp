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
    bool hasPathSum(TreeNode* root, int t) {
       if(root==nullptr){return 0;}
        t=t-root->val;
        if(t==0 and root->right==nullptr and root->left==nullptr){return 1;}
        int right= hasPathSum(root->left,t);
        int left=hasPathSum(root->right,t);
        return right||left;
    }
};