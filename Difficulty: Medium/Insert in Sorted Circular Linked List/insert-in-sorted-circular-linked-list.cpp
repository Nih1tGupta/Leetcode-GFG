/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        if(head->data >=data){
            Node*a= head->next;
            while(a->next!=head){a=a->next;}
            Node* x= new Node(data);
            a->next=x;
            x->next=head;
            return x;
        }
        Node*curr=head->next;Node*prev=head;
        while(curr->data <=data and curr!=head){
             prev=curr;
            curr=curr->next;
        }
        if(curr==head){
            Node*y= new Node(data);
            prev->next=y;
            y->next=head;
            return head;
        }
        Node*z= new Node(data);
        prev->next=z;
        z->next=curr;
        return head;
    }
};