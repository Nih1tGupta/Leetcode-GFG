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
TreeNode*prev=nullptr;
    void flatten(TreeNode* root) {

        // TreeNode*cur=root;
        // while(cur!=nullptr){
        //     if(cur->left!=nullptr){
        //         TreeNode*prev=cur->left;
        //         while(prev->right!=nullptr){prev=prev->right;}
        //         prev->right=cur->right;
        //         cur->right=cur->left;
        //         cur->left=nullptr;
        //     }
        // cur=cur->right;
        // }
      
        if(root==nullptr)return;
        flatten(root->right);
        flatten(root->left);
        root->right=prev;
        root->left=nullptr;
        prev=root;
    }
};