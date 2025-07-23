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
    // bool helper(TreeNode*root,vector<TreeNode*>&v,TreeNode*x){
    //     if(root==nullptr)return false;
    //     v.push_back(root);
    //     if(root==x)return true;
    //     if(helper(root->left,v,x) || helper(root->right,v,x)){return 1;}
    //     v.pop_back();
    //     return false;
    // }
    // vector<TreeNode*>help(TreeNode*root,TreeNode*x){
    //     vector<TreeNode*>v;
    //     if(root==nullptr)return v;
    //     helper(root,v,x);
    //     return v;
    // }
    // TreeNode*solve(vector<TreeNode*>a,vector<TreeNode*>b){
    //     int l= min(a.size(),b.size());
    //     TreeNode*ans=nullptr;
    //     for(int i=0;i<l;i++){
    //         if(a[i]==b[i]){ans=a[i];}
    //     }
    //     return ans;
    // }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // if(root==nullptr || p==nullptr || q==nullptr)return root;
        // vector<TreeNode*>p1=help(root,p);
        // vector<TreeNode*>p2=help(root,q);
        // TreeNode*x=solve(p1,p2);
        // return x;
         if(root==nullptr||root==p||root==q)return root;
        TreeNode*left=lowestCommonAncestor(root->left,p,q);
        TreeNode*right=lowestCommonAncestor(root->right,p,q);
        if(left==nullptr)return right;
        else if(right==nullptr)return left;
         return root;
    }
};