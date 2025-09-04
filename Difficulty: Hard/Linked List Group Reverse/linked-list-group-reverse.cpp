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