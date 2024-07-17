//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

void sort_and_print(vector<int>& v) {
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    v.clear();
}

void printLevelOrder(struct Node* root) {
    vector<int> v;
    queue<Node*> q;

    q.push(root);

    Node* next_row = NULL;

    while (!q.empty()) {
        Node* n = q.front();
        q.pop();

        if (n == next_row) {
            sort_and_print(v);
            next_row = NULL;
        }

        v.push_back(n->data);

        if (n->left) {
            q.push(n->left);
            if (next_row == NULL)
                next_row = n->left;
        }

        if (n->right) {
            q.push(n->right);
            if (next_row == NULL)
                next_row = n->right;
        }
    }
    sort_and_print(v);
}

Node* createTree(int parent[], int n);

/* Driver program to test above function*/


// } Driver Code Ends
/* node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to construct binary tree from parent array.
    Node *createTree(vector<int> parent) {
        // Your code here
          queue<Node*> q;
        Node* root;
        
        int n=parent.size();
        for(int i=0;i<n;i++){
            if(parent[i]==-1){
                root=new Node(i);
                q.push(root);
                break;
            }
        }
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            mp[parent[i]].push_back(i);
        }
        
        
        while(!q.empty()){
            auto node=q.front(); q.pop();
            int cnt=0,rc=-1,lc=-1;
            if(mp.find(node->data)!=mp.end()){
                
                    lc=mp[node->data][0];
                    if(mp[node->data].size()>1) rc=mp[node->data][1];
                }
            if(lc!=-1) { node->left=new Node(lc); q.push(node->left); }
            if(rc!=-1) { node->right=new Node(rc); q.push(node->right); }
    }
        return root;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }

        Solution ob;

        Node* res = ob.createTree(a);

        printLevelOrder(res);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends