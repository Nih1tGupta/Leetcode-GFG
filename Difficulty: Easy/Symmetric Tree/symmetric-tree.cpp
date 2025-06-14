/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    bool solve(Node*l1,Node*l2){
        if(l1==nullptr and l2==nullptr){return true;}
        if(l1==nullptr || l2==nullptr){return false;}
        if(l1->data != l2->data){return false;}
        bool x= solve(l1->left,l2->right);
        bool y=solve(l1->right,l2->left);
        return x|y;
    }
    bool isSymmetric(Node* root) {
        // Code here
        if(root==nullptr){return true;}
        return solve(root->left,root->right);
        
    }
};