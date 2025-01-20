//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
   Node*reverse(Node*head){
        if(head==nullptr||head->next==nullptr)return head;
        Node*prev=nullptr;
        Node*curr=head;
        while(curr!=nullptr){
            Node*frw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=frw;
        }
        return prev;
    }
    Node*find(Node*temp,int k){
        k-=1;
        while(k>0 and temp!=nullptr){
           k--; temp=temp->next;
        }
        return temp;
    }
    Node *reverseKGroup(Node *head, int k) {
     if(!head) return NULL;
        Node* curr = head;
        Node* prev = NULL;
        Node* nxt = head;
        int i = 0 ;
       while(i<k && curr){
           i++;
           nxt = curr->next ;
           curr->next = prev;
           prev = curr;
           curr = nxt;
       }
       head->next = reverseKGroup(nxt,k);
       return prev;
    }
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main(void) {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.reverseKGroup(head, k);
        printList(head);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends