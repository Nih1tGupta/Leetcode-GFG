/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  int maxi=INT_MIN;
    int solve(Node*root){
        if(root==nullptr)return 0;
        int left= solve(root->left);
        int right= solve(root->right);
        int only_one= max(left,right)+root->data;
        int both= root->data + left+right;
        int single= root->data;
        int a= max(only_one,both);
        maxi= max({maxi,a,single});
        return max(only_one,single);
    }
    int findMaxSum(Node *root) {
        // code here
        if(root==nullptr)return 0;
        solve(root);
        return maxi;
    }
};

