/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
       if(head==nullptr||head->next==nullptr)return head;
        Node*zh=new Node(-1);
         Node*oh=new Node(-1); Node*th=new Node(-1);
          Node*temp=head;
          Node*zero=zh; Node*one=oh; Node*two=th;
          while(temp!=nullptr){
              if(temp->data==0){
                  zero->next=temp;
                  zero=zero->next;
              }
              else if(temp->data==1){
                    one->next=temp;
                  one=one->next;
              }
              else{
                  two->next=temp;
                  two=two->next;
              }
              temp=temp->next;
          }
          zero->next=(oh->next)?oh->next:th->next;
          one->next=th->next;
          two->next=nullptr;
          return zh->next;
    }
};