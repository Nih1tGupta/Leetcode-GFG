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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode*temp=dummy;
        while(list1!=nullptr and list2!=nullptr){
            if(list2->val >=list1->val){
                temp->next=list1;
                temp=list1;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                temp=list2;
                list2=list2->next;
            }
        }
        while(list1!=nullptr){temp->next=list1;temp=temp->next;list1=list1->next;}
        while(list2!=nullptr){temp->next=list2;temp=temp->next;list2=list2->next;}
        return dummy->next;
    }
};