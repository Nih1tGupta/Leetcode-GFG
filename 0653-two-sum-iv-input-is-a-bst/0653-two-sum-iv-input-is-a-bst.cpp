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
 class bstIterator{
    stack<TreeNode* >st;
    bool reverse=true;
    public :
    bstIterator(TreeNode* root,bool flag){
        reverse=flag;
        pushAll(root);
    }
    bool hasNext(){
        return !st.empty();
    }
    int next(){
        TreeNode* temp=st.top(); st.pop();
        if(reverse){
            pushAll(temp->left);
        }
        else{
            pushAll(temp->right);
        }
    return temp->val;
    }
    private:
    void pushAll(TreeNode* node){
        for(;node!=nullptr;){
            st.push(node);
            if(reverse){node=node->right;}
            else{node=node->left;}
        }
    }
 };
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root==nullptr){return 0;}
        bstIterator l(root,0);
        bstIterator r(root,1);

        int i=l.next();
        int j= r.next();  //r.before() 
        while(i<j){
            if(i+j==k){return 1;}
            else if(i+j>k){
                j=r.next();
            }
            else{
                i=l.next();
            }
        }
    return 0;
    }
};