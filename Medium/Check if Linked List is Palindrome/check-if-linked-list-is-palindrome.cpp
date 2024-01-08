//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
#include<vector>

class Solution{
    
   
        public:
    bool check(vector<int>v1){
        int n=v1.size();
        int s=0; int e=n-1;
        while(s<=e){
            if(v1[s]!=v1[e]){
                return false;
              
            }
            s++;e--;
        }
        return true;
    }
 
    //Function to check whether the list is palindrome.
 
    
    bool isPalindrome(Node *head)
    {
       vector<int>v;
       Node*temp=head;
       while(temp!=NULL){
           v.push_back(temp->data);
           temp=temp->next;
       }
       
        return check(v);
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends