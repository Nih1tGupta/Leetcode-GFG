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
int h(TreeNode*node){
    if(node==nullptr)return 0;
    int lh=h(node->left);
    int rh=h(node->right);
    // d=max(lh+rh);
    return 1+max(lh,rh);
}
    int diameterOfBinaryTree(TreeNode* root) {
       
        // h(root);
        // return d;
        if(root==nullptr)return 0;
        int lh=h(root->left); int rh=h(root->right);
        int d=lh+rh;
        int x=diameterOfBinaryTree(root->left);
        int y=diameterOfBinaryTree(root->right);
        return max(d,max(x,y));
    }
};