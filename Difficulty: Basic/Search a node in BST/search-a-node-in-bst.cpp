// Function to search a node in BST.
bool search(Node* root, int x) {
    // Your code here
    if(root==nullptr)return 0;
    if(root->data==x){return true;}
    if(x<root->data){ search(root->left,x);}
    else{ search(root->right,x);}
}