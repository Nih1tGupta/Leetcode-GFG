/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool helper(TreeNode*root,vector<TreeNode*>&v,TreeNode*x){
        if(root==nullptr)return false;
        v.push_back(root);
        if(root==x)return 1;
        if(helper(root->left,v,x)|| helper(root->right,v,x)){return 1;}
        v.pop_back();
        return false;
    }
    vector<TreeNode*>help(TreeNode*root,TreeNode*x){
        vector<TreeNode*>v;
        if(root==nullptr)return v;
         helper(root,v,x);
         return v;
    }
    TreeNode*solve(vector<TreeNode*>a,vector<TreeNode*>b){
        int l=min(a.size(),b.size());
        TreeNode*LCA=nullptr;
        for(int i=0;i<l;i++){
            if(a[i]==b[i])LCA=a[i];
        }
        return LCA;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>path_p=help(root,p);
        vector<TreeNode*>path_q=help(root,q);
        TreeNode*ans= solve(path_p,path_q);
        return ans;
    }
};