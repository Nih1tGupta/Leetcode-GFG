/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){80
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to check whether all nodes of a tree have the value
    // equal to the sum of their child nodes.
    int isSumProperty(Node *root) {
         if (!root || (!root->left && !root->right)) {
        return 1;
    }

    int leftVal = root->left ? root->left->data : 0;
    int rightVal = root->right ? root->right->data : 0;

    // Check current node and then recursively check for children
    if (root->data == leftVal + rightVal &&
        isSumProperty(root->left) &&
        isSumProperty(root->right)) {
        return 1;
    }

    return 0;
    }
};