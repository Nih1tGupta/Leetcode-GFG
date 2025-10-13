/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void inorder(Node*root,vector<int>&v){
        if(root==nullptr)return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    int nodeSum(Node* root, int l, int r) {
        vector<int>v;
        inorder(root,v); int s=0;
        for(auto it:v){
            if(it>=l and it <=r){s+=it;}
        }
        return s;
    }
};
