/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};*/

class Solution {
  public:
    void f(Node* root, int& sum) {
    if (!root) return;
    
    // Traverse right subtree first (greater values)
    f(root->right, sum);
    
    // Update current node
    int old = root->data;
    root->data = sum;
    sum += old;
    
    // Traverse left subtree
    f(root->left, sum);
}
    void transformTree(Node *root) {
        // code here
         int sum = 0;
    f(root, sum);
    }
};