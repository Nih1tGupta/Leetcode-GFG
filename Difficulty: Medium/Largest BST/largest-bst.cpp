/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
   bool isValidBst(Node *root, int minValue, int maxValue) {
    if (!root)
        return true;
    if (root->data >= maxValue || root->data <= minValue)
        return false;
    return isValidBst(root->left, minValue, root->data) && 
           isValidBst(root->right, root->data, maxValue);
}

// Returns size of a tree
int size(Node *root) {
    if (!root)
        return 0;
    return 1 + size(root->left) + size(root->right);
}

// Finds the size of the largest BST
int largestBst(Node *root) {
  
    // If tree is empty
    if (!root)
        return 0;
    
    // If whole tree is BST
    if (isValidBst(root, INT_MIN, INT_MAX)) 
        return size(root);
  
    // If whole tree is not BST
    return max(largestBst(root->left), 
               largestBst(root->right));

        // Your code here
        
    }
};

