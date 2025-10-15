/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void solve(Node*root,vector<int>&v){
        if(root==nullptr)return;
        if(root->left){solve(root->left,v);}
        v.push_back(root->data);
        if(root->right){solve(root->right,v);}
    }
    int kthSmallest(Node *root, int k) {
       vector<int>v;
        solve(root,v);
        if(k>v.size())return -1;
        return v[k-1];
    }
};