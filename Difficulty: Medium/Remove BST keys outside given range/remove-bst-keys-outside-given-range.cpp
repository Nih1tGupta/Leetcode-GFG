/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    Node* removekeys(Node* root, int l, int r) {
        // code here
         if (!root) return nullptr;

    // Node value is less than lower bound → discard left subtree
    if (root->data < l)
        return removekeys(root->right, l, r);

    // Node value is greater than upper bound → discard right subtree
    if (root->data > r)
        return removekeys(root->left, l, r);

    // Node is within range → recursively process left and right subtrees
    root->left = removekeys(root->left, l, r);
    root->right = removekeys(root->right, l, r);

    return root;
    }
};