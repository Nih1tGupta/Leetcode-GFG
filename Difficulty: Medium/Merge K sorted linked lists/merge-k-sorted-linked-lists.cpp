//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print nodes in a given linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    cout << endl;
}


// } Driver Code Ends

/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    Node*merge(Node*head1,Node*head2){
        Node*temp1=head1;
        Node*temp2=head2;
        Node*dummy= new Node(-1);
        Node*head=dummy;
        while(temp1!=nullptr and temp2!=nullptr){
            if(temp1->data<temp2->data){
                dummy->next=temp1;
                temp1=temp1->next;
            }
            else{
                dummy->next=temp2;
                temp2=temp2->next;
            }
            dummy=dummy->next;
        }
        if(temp1!=nullptr){dummy->next=temp1;}
        if(temp2!=nullptr){dummy->next=temp2;}
        return head->next;
    }
    Node* mergeKLists(vector<Node*>& arr) {
        int n=arr.size();
        Node*head=arr[0];
        for(int i=1;i<n;i++){
            head=merge(head,arr[i]);
        }
        return head;
    }
};



//{ Driver Code Starts.

// Driver program to test the above functions
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        vector<Node*> v(n);

        for (int i = 0; i < n; i++) {
            string line;
            getline(cin, line);
            stringstream ss(line);

            Node* head = new Node(0);
            Node* temp = head;
            int x;
            while (ss >> x) {
                Node* newNode = new Node(x);
                temp->next = newNode;
                temp = temp->next;
            }
            v[i] = head->next;
        }

        Solution ob;
        Node* head = ob.mergeKLists(v);
        printList(head);
    }

    return 0;
}

// } Driver Code Ends