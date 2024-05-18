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
    int  solve(int &moves,TreeNode*root){
        if(!root){return 0;}
         int l=solve(moves,root->left);
        int r=solve(moves,root->right);
       
        moves+= abs(l)+abs(r);
        return (l+r+root->val)-1;
    }
    int distributeCoins(TreeNode* root) {
        int moves=0;
         solve(moves,root);
        return moves;
    }
};