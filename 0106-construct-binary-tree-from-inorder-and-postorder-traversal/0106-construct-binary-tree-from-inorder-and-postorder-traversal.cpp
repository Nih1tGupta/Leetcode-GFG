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
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int n,int &preIndex,int startIn,int endIn){
        if(preIndex<0||startIn>endIn)return nullptr;
        int ele=preorder[preIndex--];
        TreeNode*root= new TreeNode(ele);
        int pos= help(inorder,n,ele);
        root->right=solve(preorder,inorder,n,preIndex,pos+1,endIn);
         root->left=solve(preorder,inorder,n,preIndex,startIn,pos-1);
         return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        int postIndex=n-1;int startIn=0;int endIn=n-1;
        return solve(postorder,inorder,n,postIndex,startIn,endIn);
    
    }
};