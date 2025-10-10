/*
class Node {
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
    vector<int> zigZagTraversal(Node* root) {
        // code here
        vector<int>v;
    	if(root==NULL){return v;}
    	bool even =true;
    	queue<Node*>q;
    	q.push(root);
    	while(!q.empty()){
    	    int size= q.size();
    	    vector<int>vv(size);
    	    for(int i=0;i<size;i++){
    	        Node*node=q.front();
    	       // vv.push_back(node->data);
    	        q.pop();
    	        if(even){vv[i]=node->data;}
    	        else{vv[size-i-1]=node->data;}
    	        if(node->left){q.push(node->left);}
    	         if(node->right){q.push(node->right);}
    	    }
    	    even=!even;
    	    for(auto it:vv){v.push_back(it);}
    	}
    	return v;
    }
};