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
    int bottom;int maxi;
     void solve(TreeNode* root,int current){
         if(!root){return;}
         if(current>maxi){maxi=current;bottom=root->val;}
         solve(root->left,current+1);
         solve(root->right,current+1);
         
     }
    int findBottomLeftValue(TreeNode* root) {
         maxi=INT_MIN;
        solve(root,0);
        return bottom;
        
    }
};