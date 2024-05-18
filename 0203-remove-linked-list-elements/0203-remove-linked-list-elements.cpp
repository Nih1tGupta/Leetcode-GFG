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
    ListNode* removeElements(ListNode* head, int val) {
//         if(head==NULL){return head;}
//               if(head->next==NULL and head->val==val){return NULL;}
//         while(head!=NULL and head->val==val){
//             head=head->next;
//         }
     
        
//         ListNode*prev=NULL;
//         ListNode*curr=head;
//         while(curr!=NULL){
//             if(curr->val==val){
//                 prev->next=curr->next;
//                 curr=curr->next;
//             }
//             else{
//                 prev=curr;
//                 curr=curr->next;
//             }
//         }
//         return head;
        if(head==nullptr){return head;}
        ListNode*dummy=new ListNode(-1);
        dummy->next=head;
        ListNode*tail=dummy;
        while(tail!=nullptr and tail->next!=nullptr){
            if(tail->next->val==val){
                ListNode*temp=tail->next;
                tail->next=temp->next;
                delete temp;
            }
            else{
                tail=tail->next;
            }
        }
        return dummy->next;
    }
};