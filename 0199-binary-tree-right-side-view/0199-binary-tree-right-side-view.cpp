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
    void f(TreeNode*root,int lvl,vector<int>&v){
        if(root==nullptr)return;
        if(v.size()==lvl)v.push_back(root->val);
        lvl++;
        f(root->right,lvl,v);
        f(root->left,lvl,v);
    }
    vector<int> rightSideView(TreeNode* root) {
        // reverse pre order
        // if(root==nullptr)return {};
        // vector<int>v;
        // f(root,0,v);
        // return v;
          vector<int> res;
        if(root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            TreeNode*temp=q.front();
            res.push_back(temp->val);
            for(int i=0;i<size;i++){
                TreeNode*curr = q.front();
                q.pop();
                
                if(curr->right!=NULL) q.push(curr->right);
                if(curr->left!=NULL) q.push(curr->left);
            }
        }
        return res;
    }
};