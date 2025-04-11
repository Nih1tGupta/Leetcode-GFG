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
        if(root==nullptr){return v;}
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            vector<int>l;
            for(int i=0;i<sz;i++){
                TreeNode*top=q.front();q.pop();
                l.push_back(top->val);
                if(top->left!=nullptr){q.push(top->left);}
                if(top->right!=nullptr){q.push(top->right);}
            }
            v.push_back(l);
        }
        return v;
    }
};