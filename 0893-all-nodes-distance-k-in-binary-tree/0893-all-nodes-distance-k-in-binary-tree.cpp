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
   

       void mapping(unordered_map<TreeNode*,TreeNode*>&mp,TreeNode*root,TreeNode*target){
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode*top=q.front();q.pop();
        if(top->left){ mp[top->left]=top;q.push(top->left);}
        if(top->right){mp[top->right]=top;q.push(top->right);}
    }
}
    vector<int> distanceK(TreeNode* root, TreeNode* t, int k) {

        // 1- mapping
        unordered_map<TreeNode*,TreeNode*>mp;
        mapping(mp,root,t);
        // 2- finding (bfs)
         unordered_map<TreeNode*,bool>vis;
         queue<TreeNode*>q;
         q.push(t);int lvl=0;
         vis[t]=true;
         while(!q.empty()){
            int s=q.size();
            if(lvl++==k)break;
           
            for(int i=0;i<s;i++){
                TreeNode*curr=q.front();q.pop();
                if(curr->left and !vis[curr->left]){
                    q.push(curr->left);vis[curr->left]=true;
                }

                if(curr->right and !vis[curr->right]){
                    q.push(curr->right);vis[curr->right]=true;
                }
                if(mp[curr] and !vis[mp[curr]]){
                    q.push(mp[curr]);vis[mp[curr]]=true;
                }
            }
         }
         vector<int>v;
         while(!q.empty()){
            TreeNode*curr=q.front();q.pop();
            v.push_back(curr->val);
            }
         return v;
    }
};