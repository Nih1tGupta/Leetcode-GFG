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
    int minDepth(TreeNode* root) {
        // if(root==nullptr)return 0;
        // if(root->left==nullptr and root->right==nullptr)return 1;
        // int l= (root->left)?minDepth(root->left):INT_MAX;
        // int r= (root->right)?minDepth(root->right):INT_MAX;
        // return 1+min(l,r);
        if(root==nullptr)return 0;
        queue<TreeNode*>q;
        q.push(root);
        int lvl=1;
        while(!q.empty()){
                int n=q.size();
                while(n--){
                    TreeNode*curr=q.front();
                    q.pop();
                    if(curr->left==nullptr and curr->right==nullptr){return lvl;}
                    if(curr->left){q.push(curr->left);}
                     if(curr->right){q.push(curr->right);}
                }
        lvl++;
        }
    return lvl;
    }
};