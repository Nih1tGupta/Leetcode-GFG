//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends

// User function Template for C++

/*
class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};
*/

class Solution {
  public:
  
    Node *primeList(Node *head) {

      vector<bool>SOE(10010,1);
      SOE[0]=SOE[1]=0;
      for(int i=2;i*i<=10010;i++){
          if(SOE[i]){
              for(int j=2*i;j<=10010;j+=i){
                  SOE[j]=0;
              }
          }
      }
  
        Node*curr=head;
        while(curr!=nullptr){
            int value= curr->val;
            if(value==1){curr->val=2;}
            else if(SOE[value]){}
            else{
                int left=value;
                while(!SOE[left]){left--;}
                int right=value;
                while(!SOE[right]){right++;}
                int ld=abs(value-left);
                int rd=abs(value-right);
                curr->val= (ld<=rd)?left:right;
            }
            curr=curr->next;
        }
        return head;
    }
};


//{ Driver Code Starts.

int main() {

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
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        head = ob.primeList(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends