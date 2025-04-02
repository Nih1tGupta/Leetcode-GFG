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
    class cmp {
     public:
     bool operator()(ListNode* a, ListNode* b){
         if(a->val > b->val)return true;
         else return false;
     }
 };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,cmp>pq;
        for(int i=0;i<lists.size();i++){
            if(lists[i]!=nullptr){
                pq.push(lists[i]);
            }
        }
        ListNode*dummy= new ListNode(-1);
        ListNode*tail=dummy;  //ptr hai dummy ka
        while(pq.size()>0){
            ListNode*front= pq.top();
            tail->next=front;
            tail=front;
            pq.pop();
            if(front->next){pq.push(front->next);}
        }
    return dummy->next;
    }
};