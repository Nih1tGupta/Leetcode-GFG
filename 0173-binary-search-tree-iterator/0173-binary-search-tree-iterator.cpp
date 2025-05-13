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
class BSTIterator {

    private:
stack<TreeNode*>st;
    void pushit(TreeNode*root){
        while(root!=nullptr){
            st.push(root);root=root->left;
        }
    }
public:
    BSTIterator(TreeNode* root) {
        pushit(root);
    }
    
    int next() {
        TreeNode* topp=st.top(); st.pop();
        pushit(topp->right);
        return topp->val;
    }
    
    bool hasNext() {
        if(!st.empty())return 1;
        return 0;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */