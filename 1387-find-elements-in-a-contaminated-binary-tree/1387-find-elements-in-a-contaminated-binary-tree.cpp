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
class FindElements {
public:
unordered_set<int>st;
    // void dfs(TreeNode*root,int x){
    //     if(root==nullptr)return;
    //     st.insert(x);
    //     if(root->left){dfs(root->left,2*x+1);}
    //       if(root->right){dfs(root->right,2*x+2);}
    // }
        void bfs(TreeNode*root,int x){
            queue<TreeNode*>q;
            root->val=x;
            q.push(root);
            while(!q.empty()){
                TreeNode* t=q.front(); 
                q.pop();
                st.insert(t->val);
                if(t->left){
                    t->left->val= 2*t->val+1;
                    q.push(t->left);
                }
                 if(t->right){
                    t->right->val=2*t->val+2;
                    q.push(t->right);
                }
            }
        }
    FindElements(TreeNode* root) {
        st.clear();
        // dfs(root,0);
        bfs(root,0);
    }
    
    bool find(int target) {
        return(st.find(target)!=st.end());
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */