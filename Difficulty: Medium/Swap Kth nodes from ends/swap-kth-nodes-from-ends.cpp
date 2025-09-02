/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* swapKth(Node* head, int k) {
       if(!head)return nullptr;
       int len=0;
       Node*temp=head;
       while(temp){temp=temp->next;len++;}
       if(k>len){return head;}
       Node*first=head; Node*sec=head;
       for(int i=1;i<k;i++){first=first->next;}
       for(int i=1;i<len-k+1;i++){sec=sec->next;}
       int dummy=first->data;
       first->data=sec->data;
       sec->data=dummy;
       return head;
    }
};