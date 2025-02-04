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
 int help(vector<int>& inorder, int n, int element)
    {
        for(int i=0; i<n; i++)
            if(inorder[i]==element)
                return i;
        return -1;
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int n,int &preIndex,int startIn,int endIn,unordered_map<int,int>&mp){
        if(preIndex>=n||startIn>endIn)return nullptr;
        int ele=preorder[preIndex++];
        TreeNode*root= new TreeNode(ele);
        // int pos= help(inorder,n,ele);
        int pos=mp[ele];
        root->left=solve(preorder,inorder,n,preIndex,startIn,pos-1,mp);
         root->right=solve(preorder,inorder,n,preIndex,pos+1,endIn,mp);
         return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        int preIndex=0;int startIn=0;int endIn=n-1;
         unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
        mp[inorder[i]]=i;
        }
        return solve(preorder,inorder,n,preIndex,startIn,endIn,mp);

    }
};