//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    
    Node* reverse( Node* head ) {
        Node* prevNode = NULL ;
        Node* currNode = head ;
        Node* nextNode = NULL ;
        
        while( currNode ) {
            nextNode = currNode->next ;
            currNode->next = prevNode ;
            prevNode = currNode ;
            currNode = nextNode ;
        }
        return prevNode  ;
    }
    
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        
        Node* head1 = reverse(first) ;
        Node* head2 = reverse(second) ;
        
        Node* head = nullptr ;
        Node* curr = nullptr ;
        
        int carry = 0 ;
        int sum = 0 ;
        
        while( head1 || head2 || carry ) {
            
            sum = ( head1 ? head1->data : 0 ) + ( head2 ? head2->data : 0 ) + carry ;
            carry = sum/10 ;
            sum = sum%10 ;
            
            curr = new Node(sum) ;
            curr->next = head ;
            head = curr ;
            
            if( head1 ) head1 = head1->next ;
            if( head2 ) head2 = head2->next ;
            
        }
        return head ;
    
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends