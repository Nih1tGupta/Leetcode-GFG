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
    int height(TreeNode*root){
        if(root==nullptr){return 0;}
        return max(height(root->left), height(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){return true;}
        int left=isBalanced(root->left);
        int right=isBalanced(root->right);
        bool diff= abs(height(root->left) -height(root->right))<=1;
        if(left and right and (diff)){return true;}
        return false;
    }
};