/*
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    pair<int,int>solve(Node*root){
        if(root==nullptr)return {0,0};
        pair<int,int>left= solve(root->left);
        pair<int,int>right= solve(root->right);
        int inc= root->data + left.second+right.second;
        int ex=  max(left.first,left.second) + max(right.first,right.second);
        return {inc,ex};
    }
    int getMaxSum(Node *root) {
        // code here
        pair<int,int>res= solve(root);
        return max(res.first,res.second);
    }
};