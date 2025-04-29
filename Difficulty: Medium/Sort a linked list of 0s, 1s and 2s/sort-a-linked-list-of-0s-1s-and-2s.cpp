//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}


// } Driver Code Ends

/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        //  1-2-2-1-2-0-2-2
         if(head==nullptr||head->next==nullptr)return head;
        Node*zh=new Node(-1);
         Node*oh=new Node(-1); Node*th=new Node(-1);
          Node*temp=head;
          Node*zero=zh; Node*one=oh; Node*two=th;
          while(temp!=nullptr){
              if(temp->data==0){
                  zero->next=temp;
                  zero=zero->next;
              }
              else if(temp->data==1){
                    one->next=temp;
                  one=one->next;
              }
              else{
                  two->next=temp;
                  two=two->next;
              }
              temp=temp->next;
          }
          zero->next=(oh->next)?oh->next:th->next;
          one->next=th->next;
          two->next=nullptr;
          return zh->next;
    }
};



//{ Driver Code Starts.

// Driver program to test above functions
int main() {
    int t, k;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = new Node(x);
            tail = head;

            while (ss >> x) {
                tail->next = new Node(x);
                tail = tail->next;
            }

            // Link the last node to the head if k is 1 to make it circular
            if (k == 1) {
                tail->next = head;
            }
        }

        Solution ob;
        Node* newHead = ob.segregate(head);
        printList(newHead);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends