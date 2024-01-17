/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       unordered_map<ListNode*,bool>mp;
        if(head==NULL || head->next==NULL){return false;}
        ListNode*curr=head;
        while(curr->next!=NULL){
            if(mp[curr]==false){mp[curr]=true ;}
            else{
                return true;
            }
            curr=curr->next;
        }
        return false;
    }
};