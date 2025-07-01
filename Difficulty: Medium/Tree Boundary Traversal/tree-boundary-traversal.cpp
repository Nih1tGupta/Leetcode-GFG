/*
// Tree Node
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
    bool isLeaf(Node*root){
        if(root->left==nullptr and root->right==nullptr){return 1;}
        return 0;
    }
    void leftt(Node*root,vector<int>&v){
        while(root!=nullptr){
            if(!isLeaf(root)){v.push_back(root->data);}
            if(root->left){root=root->left;}
            else{root=root->right;}
        }
    }
    
    void leaf(Node*root,vector<int>&v){
        if(isLeaf(root)){v.push_back(root->data);}
        if(root->left){leaf(root->left,v);}
        if(root->right){leaf(root->right,v);}
    }
    
      void rightt(Node*root,vector<int>&v){
          vector<int>temp;
        while(root!=nullptr){
            if(!isLeaf(root)){temp.push_back(root->data);}
            if(root->right){root=root->right;}
            else{root=root->left;}
        }
        for(int i=temp.size()-1;i>=0;i--){
            v.push_back(temp[i]);
        }
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int>v;
        if(root==nullptr){return v;}
        if(!isLeaf(root)){v.push_back(root->data);}
        leftt(root->left,v);
        leaf(root,v);
        rightt(root->right,v);
        return v;
    }
};