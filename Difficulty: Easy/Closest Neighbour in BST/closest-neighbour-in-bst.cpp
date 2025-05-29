/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    void inorder(Node*root,vector<int>&v){
        if(root==nullptr)return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    int findMaxFork(Node* root, int k) {
        // code here
        vector<int>v;
        inorder(root,v);
        int ans=-1;
        for(int i=0;i<v.size();i++){
            if(v[i]<=k){ans=v[i];}
        }
    return ans;
    }
};