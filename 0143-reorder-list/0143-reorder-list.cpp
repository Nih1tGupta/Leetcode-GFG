/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode*head){
        ListNode*prev=nullptr; ListNode*frw=nullptr;
        while(head!=nullptr){
            frw=head->next;
            head->next=prev;
            prev=head;
            head=frw;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=nullptr and fast->next->next!=nullptr){
            fast=fast->next->next; 
            slow=slow->next;
        }
        ListNode*curr=slow->next;
        ListNode*prev=reverse(curr);
        slow->next=nullptr;

        ListNode*A=head; ListNode*B=prev;
        while(A and B){
            ListNode*A1=A->next;
            ListNode*B1=B->next;
            A->next=B;
            B->next=A1;
            A=A1;
            B=B1;
        }
    }
};