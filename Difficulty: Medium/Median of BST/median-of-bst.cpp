/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
         void inorder(Node* root,vector<int>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    int findMedian(Node* root) {
        // Code here
        vector<int>ans;
        inorder(root,ans);
        int n=ans.size();
        int median=0;
        if(n%2==0)
        {
            median=ans[(n/2)-1];
        }
        else
        {
            median = ans[((n+1)/2) - 1];
        }
        return median;
        
    }
};