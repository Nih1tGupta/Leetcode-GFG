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
    int solve(map<TreeNode*,TreeNode*>&mp,TreeNode* target){
        queue<TreeNode*>q;
        q.push(target);
        map<TreeNode*,int>vis;
        vis[target]=1;
        int time=0;
        while(!q.empty()){
            int sz=q.size(); int fl=0;
            time++;
            for(int i=0;i<sz;i++){
                auto node=q.front(); q.pop();
                if(node->left and !vis[node->left]){
                    fl=1;vis[node->left]=1; q.push(node->left);
                }
                 if(node->right and !vis[node->right]){
                    fl=1;vis[node->right]=1; q.push(node->right);
                }
                 if(mp[node] and !vis[mp[node]]){
                    fl=1;vis[mp[node]]=1; q.push(mp[node]);
                }
            }
            // if(fl){time++;}
        }
        return time-1;
    }
    TreeNode*mapping(TreeNode*root,int st,map<TreeNode*,TreeNode*>&mp){
        queue<TreeNode*>q;
        q.push(root);
        TreeNode*target;
        while(!q.empty()){
            TreeNode*frontt=q.front(); q.pop();
            if(frontt->val==st)target=frontt;
            if(frontt->left){mp[frontt->left]=frontt;q.push(frontt->left);}
            if(frontt->right){mp[frontt->right]=frontt;q.push(frontt->right);}
        }
        return target;
    }
    int amountOfTime(TreeNode* root, int start) {
        map<TreeNode*,TreeNode*>mp;
         TreeNode*target=mapping(root,start,mp);
         int maxi=solve(mp,target);
         return maxi;
    }
};