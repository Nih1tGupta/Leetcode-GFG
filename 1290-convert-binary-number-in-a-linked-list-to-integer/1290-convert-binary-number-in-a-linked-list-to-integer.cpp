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
    int getDecimalValue(ListNode* head) {
        if(head==NULL || head->next==NULL){return head->val;}
        string s="";
        ListNode*curr=head;
    while(curr!=NULL){
        s+=to_string(curr->val);
        curr=curr->next;
    }
       int ss= stoi(s, 0, 2);
        return ss;
    }
};