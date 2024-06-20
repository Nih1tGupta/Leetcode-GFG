//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    private:
      int find(int in[] ,int inorderStart , int inorderEnd , int element ,int  n){
        for(int i = inorderStart ; i<=inorderEnd ;i++){
            if(in[i]==element){
                return i ; 
            }
        }
        return -1 ;
    }
    public:
   
    Node* solve(int in[],int pre[], int &idx,int st,int e,int n){
        if(idx>=n || st>e){return nullptr;}
        int element=pre[idx++];
        Node*root = new Node(element);
        int position=find(in,st,e,element,n);
        root->left=solve(in,pre,idx,st,position-1,n);
        root->right=solve(in,pre,idx,position+1,e,n);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        int preO=0;
        Node*ans= solve(in,pre,preO,0,n-1,n);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends