//{ Driver Code Starts
//Code by Shubham Joshi
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    string data;
    Node* next;
    
    Node(string x){
        data = x;
        next = NULL;
    }
};

Node *newNode(string str)
{
    Node *new_node = new Node(str);
    new_node->next = NULL;
    return new_node;
}

bool compute(struct Node* root);

void print(Node *root)
{
    Node *temp = root;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
                struct Node *temp = head;
		
		for(int i=0;i<K;i++){
		string str="";
		cin>>str;
			if(head==NULL)
			head=temp=new Node(str);
			else
			{
				temp->next = new Node(str);
				temp=temp->next;
			}
		}
		if(compute(head))
			cout<<"True"<<endl;
		else 
			cout<<"False"<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
bool compute(Node* root)
{
   string s="";
   Node*head=root;
   while(head){
       s+=head->data;head=head->next;
   }
   int i=0;int j=s.length()-1;
   while(i<j){
       if(s[i]!=s[j]){return false;}
       i++;j--;
   }
   return true;
}
