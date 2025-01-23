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
    int widthOfBinaryTree(TreeNode* root) {
        int ans=INT_MIN;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int sz=q.size();
             int st,end;
            int mini=q.front().second;
            for(int i=0;i<sz;i++){
                int idx=q.front().second-mini;
                TreeNode*node=q.front().first; q.pop();
                if(i==0){st=idx;}
                if(i==sz-1){end=idx;}
                if(node->left){q.push({node->left,(long long)2*idx+1});}
                if(node->right){q.push({node->right,(long long)2*idx+2});}
            }
            ans=max(ans,end-st+1);
        }
    return ans;
    }
};