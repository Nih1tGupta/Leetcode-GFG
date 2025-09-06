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
    int lengthOfLoop(Node *head) {
        // code here
        if(head==nullptr || head->next==nullptr)return 0;
        Node*slow=head; Node*fast=head; int len=0;
        while(fast and fast->next){
            slow=slow->next; fast=fast->next->next;
            if(slow==fast){
                len++;fast=fast->next;
                while(fast!=slow){fast=fast->next;len++;}
                return len;
            }
        }
        return len;
    }
};