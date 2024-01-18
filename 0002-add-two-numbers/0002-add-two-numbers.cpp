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
    ListNode* Add(ListNode *num1,ListNode *num2){
        ListNode*temp1=num1;
        ListNode*temp2=num2;
        ListNode*extra = new ListNode(-1);
        ListNode* current = extra;
        int carry=0;
        while(temp1!=NULL || temp2!=NULL){
            int sum=0;
          if(temp2==NULL){sum+=temp1->val+carry;}
             else if(temp1==NULL){sum+=temp2->val+carry;}
            else{ sum+=temp1->val+temp2->val+ carry;}
            ListNode* New = new ListNode(sum%10);
            carry=sum/10;
            // temp1=temp1->next;
            // temp2=temp2->next;
            current->next= New;
            current=current->next;
            if(temp1!=NULL){temp1=temp1->next;}
            if(temp2!=NULL){temp2=temp2->next;}
        }
//         agar carry hai
        if(carry){
           ListNode* carryy= new ListNode(carry);
            current->next=carryy;
        }
        return extra->next;
        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return Add(l1,l2);
    }
};