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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode*temp=head;
        while(temp!=NULL){count++;temp=temp->next;}
//         case1 
        if(n==count){ListNode*to_delete=head;
                    head=head->next;
                    delete to_delete;return head;}
        // case2
        ListNode*curr=head;int c=0;
        while(c != count-n-1){c++;curr=curr->next;}
        ListNode*to_delete=curr->next;
        curr->next=curr->next->next;
        delete to_delete;
        return head;
    }
};