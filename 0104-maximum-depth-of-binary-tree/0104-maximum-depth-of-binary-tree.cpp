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
    int maxDepth(TreeNode* root) {
        // if(root==nullptr)return 0;
        // int lh=maxDepth(root->left);
        // int rh=maxDepth(root->right);
        // return max(lh,rh)+1;
    queue<TreeNode*>q;
    if(root==nullptr)return 0;
    int depth=0;
    q.push(root);
    while(!q.empty()){
        int sz=q.size(); depth++;
        for(int i=0;i<sz;i++){
            TreeNode*fr=q.front(); q.pop();
            if(fr->left){q.push(fr->left);}
            if(fr->right){q.push(fr->right);}
        }

    }
    return depth;
    }
};