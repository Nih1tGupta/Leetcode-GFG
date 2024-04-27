//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next, *prev;

    Node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};


// } Driver Code Ends

/* Structure of the node of the list is as
struct Node
{
    int data;
    struct Node *next, *prev;
    Node (int x){
        data = x;
        next = prev = NULL;
    }
};
*/

class Solution {
  public:
   Node* findMiddle(Node* root){
        Node* slow=root;
        Node* fast=root->next;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
        
    }
    Node* mergeLL(Node* list1,Node* list2){
        
        

        Node* dummy=new Node(-1);
        Node* temp=dummy;
        while(list1 && list2){
            if(list1->data<list2->data){
                temp->next=list1;
                list1->prev=temp;
                temp=list1;
                list1=list1->next;
            }else{
                temp->next=list2;
                list2->prev=temp;
                temp=list2;
                list2=list2->next;
            }
        }
         if(list1) {
             temp->next=list1;
             list1->prev=temp;
         }
        else {
            temp->next=list2;
            list2->prev=temp;
            
        }
        dummy=dummy->next;
        dummy->prev=NULL;
        return dummy;
      
    }
    struct Node *sortDoubly(struct Node *head) {
        // Your code here
        if(!head || !head->next) return head;
        Node* middle=findMiddle(head);
        Node* right=middle->next;
        middle->next=nullptr;
        Node* left=head;
        left=sortDoubly(left);
        right=sortDoubly(right);
        return mergeLL(left,right);
    }
};


//{ Driver Code Starts.

void insert(struct Node **head, int data) {
    struct Node *temp = new Node(data);
    if (!(*head))
        (*head) = temp;
    else {
        temp->next = *head;
        (*head)->prev = temp;
        (*head) = temp;
    }
}

void print(struct Node *head) {
    struct Node *temp = head;
    while (head) {
        cout << head->data << ' ';
        temp = head;
        head = head->next;
    }
    cout << endl;
    while (temp) {
        cout << temp->data << ' ';
        temp = temp->prev;
    }
    cout << endl;
}

// Utility function to swap two integers
void swap(int *A, int *B) {
    int temp = *A;
    *A = *B;
    *B = temp;
}

// Driver program
int main(void) {
    long test;
    cin >> test;
    while (test--) {
        int n, tmp;
        struct Node *head = NULL;
        cin >> n;
        while (n--) {
            cin >> tmp;
            insert(&head, tmp);
        }
        Solution ob;
        head = ob.sortDoubly(head);
        print(head);
    }
    return 0;
}

// } Driver Code Ends