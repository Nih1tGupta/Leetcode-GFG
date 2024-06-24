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
   
    TreeNode* solve(TreeNode* root, int val, int depth,int maxdepth){
        if(root==nullptr){return nullptr;}
        if(depth==1){
            TreeNode* root1= new TreeNode(val);
            root1->left=root;
            root1->right=nullptr;
            return root1;
        }
        if(maxdepth==depth-1){
            TreeNode* leftorg=root->left;
            TreeNode*rightorg=root->right;
            
//             leftvpart
             root->left= new TreeNode(val);
            root->left->left=leftorg;
            root->left->right=nullptr;
            
            root->right= new TreeNode(val);
            root->right->right=rightorg;
            root->right->left=nullptr;
         return root;
        }
           root->left=solve(root->left,val,depth,maxdepth+1);
           root->right =solve(root->right,val,depth,maxdepth+1);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        int maxdepth=1;
        return solve(root,val,depth,maxdepth);
    }
};