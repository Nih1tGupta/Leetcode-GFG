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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==nullptr)return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            vector<int>l;
            for(int i=0;i<sz;i++){
            TreeNode*fr=q.front(); q.pop();
            l.push_back(fr->val);
            if(fr->left){q.push(fr->left);}
            if(fr->right){q.push(fr->right);}
            }
            v.push_back(l);
        }
        return v;
    }
};