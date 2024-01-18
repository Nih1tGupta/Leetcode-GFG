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
   
ListNode*sol(ListNode*first,ListNode*second){
       ListNode*curr1=first;
        ListNode*next1=curr1->next;
        ListNode*curr2=second;
        ListNode*next2=curr2->next;
        
        
        if(first->next==NULL){
            first->next=second;
        }
        
        while(next1 !=NULL and curr2!=NULL){
            if((curr2->val >=curr1->val)and (curr2->val <=next1->val) ){
                curr1->next=curr2;
                next2= curr2->next;
                curr2->next=next1;
                curr1=curr2;
                curr2=next2;
            }
            else{
                curr1=next1;
                next1=next1->next;
                if(next1==NULL){
                    curr1->next=curr2;
                    return first;
                }
            }
        }
        return first;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL and list2==NULL){return NULL;}
        if(list1==NULL){return list2;}
        if(list2==NULL){return list1;}
        if(list1->val <= list2->val){return sol(list1,list2);}
        else {return sol(list2,list1);}

    }
};