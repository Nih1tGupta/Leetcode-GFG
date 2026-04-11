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
    ListNode*reverse(ListNode*head){
        if(head==nullptr||head->next==nullptr)return head;
        ListNode*prev=nullptr;
        ListNode*curr=head;
        while(curr!=nullptr){
            ListNode*frw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=frw;
        }
        return prev;
    }
    ListNode*find(ListNode*temp,int k){
        k-=1;
        while(k>0 and temp!=nullptr){
           k--; temp=temp->next;
        }
        return temp;
    }
// BRUTE FORCE
    // if(head==NULL || k<=1)return head;
    //     vector<int>temp;
    //     ListNode *a =head;
    //     while(a!=NULL){
    //         temp.push_back(a->val);
    //         a = a->next;
    //     }
    //     int n = temp.size();
    //     int ws = n/k;

    //     for(int i=0;i<n;i = i+k){
    //                 if (i + k <= n) { 
    //         reverse(temp.begin() + i, temp.begin() + i + k);
    //     }}
    
    //     a=head;
 
    //     for(int i=0;i<n;i++){
    //         a->val =temp[i];
    //         a = a->next;
    //     }
    // return head;
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head->next==nullptr)return head;
        ListNode*temp=head;
        ListNode*prev=nullptr; 
        ListNode*nxt=nullptr;
        while(temp!=nullptr){
            ListNode*kth=find(temp,k);
            if(kth==nullptr){
                if(prev)prev->next=temp;
                break;
            }
           nxt=kth->next;
           kth->next=nullptr;
           reverse(temp);
           if(temp==head){head=kth;}
           else{prev->next=kth;}
            prev=temp;
            temp=nxt;
        }
        return head;
    }
};