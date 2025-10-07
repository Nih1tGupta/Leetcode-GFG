/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        vector<int>v;
       if(root==nullptr)return v;
       map<int,int>mp;
       queue<pair<Node*,int>>q;
       q.push({root,0});
       while(!q.empty()){
           auto p=q.front(); q.pop();
           Node* node=p.first;  int lvl=p.second;
           mp[lvl]=node->data;
           if(node->left){
               q.push({node->left,lvl-1});
           }
           if(node->right){
               q.push({node->right,lvl+1});
           }
       }
       for(auto it:mp){
           v.push_back(it.second);
       }
       return v;

    }
};