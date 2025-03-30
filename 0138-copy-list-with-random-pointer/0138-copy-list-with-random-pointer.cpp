/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr)return nullptr;
        Node*temp=head;
        while(temp){
            Node*copy=new Node(temp->val);
            copy->next=temp->next;
            temp->next=copy;
            temp=temp->next->next;
        }

        temp=head;
        while(temp){
            Node*copy= temp->next;
            if(temp->random){
                copy->random= temp->random->next;
            }
            else{
                copy->random=nullptr;
            }
            temp=temp->next->next;
        }

        Node*dummy=new Node(-1);
        Node*res=dummy;
        temp=head;
        while(temp){
            res->next=temp->next;
            temp->next=temp->next->next;
            res=res->next;
            temp=temp->next;
        }
        return dummy->next;
    }
};