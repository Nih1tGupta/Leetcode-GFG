//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
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

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
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
class Solution {
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
    Node* addTwoLists(Node* num1, Node* num2) {
       Node*l1=reverse(num1);
       Node*l2=reverse(num2);
       Node*dummy= new Node(-1);
       Node*curr=dummy;
       Node*temp1=l1;
       Node*temp2=l2;
       int sum=0; int carry=0;
       while(temp1||temp2||carry){
           sum=0;
           if(temp1){sum+=temp1->data;temp1=temp1->next;}
           if(temp2){sum+=temp2->data;temp2=temp2->next;}
           sum+=carry;
           carry=sum/10;int digit=sum%10;
           curr->next=new Node(digit);
           curr=curr->next;
       }
       dummy=reverse(dummy->next);
       while(dummy->data==0 and dummy->next){dummy=dummy->next;}
       return dummy;
       
       
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends