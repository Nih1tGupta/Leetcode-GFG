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
     private:
    int msum=INT_MIN;int ml=0;
public:
      void solve(Node*root,int l,int s){
          if(root==nullptr){return;}
          s+=root->data;
          if(root->left==nullptr and root->right==nullptr){
              if(l>ml){ml=l;msum=s;}
              else if(l==ml and s>msum){msum=s;}
          }
          solve(root->left,l+1,s);
          solve(root->right,l+1,s);
      }
    int sumOfLongRootToLeafPath(Node *root)
    {
        if(root==NULL){return 0;}
         solve(root,1,0);
         return msum;
        
    }
};