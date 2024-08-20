//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
     int findMaxDistance(unordered_map<Node*, Node*>& mpp, Node* target) {
        queue<Node*> q;
        q.push(target);

        unordered_map<Node*, int> vis;
        vis[target] = 1;
        int time = 0;

        while (!q.empty()) {
            int size = q.size();
            int flag = 0;
            for (int i = 0; i < size; i++) {
                auto node = q.front();
                q.pop();

                // Left
                if (node->left && !vis[node->left]) {
                    flag = 1;
                    vis[node->left] = 1;
                    q.push(node->left);
                }

                // Right
                if (node->right && !vis[node->right]) {
                    flag = 1;
                    vis[node->right] = 1;
                    q.push(node->right);
                }

                // Top
                if (mpp[node] && !vis[mpp[node]]) {
                    flag = 1;
                    vis[mpp[node]] = 1;
                    q.push(mpp[node]);
                }
            }
            if (flag) {
                time++;
            }
        }
        return time;
    }

    Node* bfsToMapParent(Node* root, unordered_map<Node*, Node*>& mpp,
                             int start) {
        queue<Node*> q;
        q.push(root);
        Node* res;

        while (!q.empty()) {
            Node* node = q.front();
            if (node->data == start)
                res = node;
            q.pop();

            if (node->left) {
                mpp[node->left] = node;
                q.push(node->left);
            }
            if (node->right) {
                mpp[node->right] = node;
                q.push(node->right);
            }
        }
        return res;
    }
    int minTime(Node* root, int start) 
    {
        // Your code goes here
         unordered_map<Node*, Node*> mpp;
        Node* target = bfsToMapParent(root, mpp, start);
        int ans = findMaxDistance(mpp, target);
        return ans;
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends