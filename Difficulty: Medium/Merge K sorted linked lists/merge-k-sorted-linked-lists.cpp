/*
class Node {
  public:
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
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            Node*temp=arr[i];
            while(temp!=nullptr){v.push_back(temp->data);temp=temp->next;}
            
        }
        sort(v.begin(),v.end());
        Node*dummy=new Node(-1);Node*temp=dummy;
        for(int i=0;i<v.size();i++){
            Node*curr= new Node(v[i]);
            temp->next=curr;
            temp=temp->next;
        }
        return dummy->next;
    }
};