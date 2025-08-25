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
    ListNode* swapPairs(ListNode* head) {
        ListNode*dummy= new ListNode(0); ListNode*prev=dummy;
        dummy->next=head;
        while(prev->next and prev->next->next){
            ListNode*a= prev->next; ListNode*b=prev->next->next;
            ListNode*temp=b->next;
            prev->next=b;
            b->next=a;
            a->next=temp;
            prev=a;
        }
        head=dummy->next;
        delete dummy;
        return head;
    }
};