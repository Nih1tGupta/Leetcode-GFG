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
    TreeNode* reverseOddLevels(TreeNode* root) {
        vector<TreeNode*>v;
        queue<TreeNode*>q;
         if (!root) {
            return nullptr;  
        }
        q.push(root);int l=0;
        while(!q.empty()){
            int sz=q.size();
             vector<TreeNode*> v;
            for(int i=0;i<sz;i++){
               TreeNode* top=q.front();q.pop();
               v.push_back(top);
               if(top->left){q.push(top->left);}
               if(top->right){q.push(top->right);}
            }
            if(l%2==1){
                int l=0;int r=v.size()-1;
                while(l<r){swap(v[l]->val,v[r]->val);l++;r--;}
            }
            l++;

        }
        return root;
    }
};