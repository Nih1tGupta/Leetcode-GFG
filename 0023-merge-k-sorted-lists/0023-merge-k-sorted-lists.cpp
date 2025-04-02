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
    ListNode*mergeTwo(ListNode*a,ListNode* b){
        if(!a)return b;
        if(!b)return a;
        if(a->val <=b->val){
            a->next=mergeTwo(a->next,b);
            return a;
        }
        else{
            b->next=mergeTwo(a,b->next);
            return b;
        }
        return nullptr;
    }
    ListNode*partition(vector<ListNode*>&lists,int st,int end){
        // base
        if(st==end)return lists[st];// single linked list
        if(st>end)return nullptr;  //traversed the whole 
        int mid= (st+end)/2;
        ListNode* l1 = partition(lists,st,mid);
        ListNode* l2 = partition(lists,mid+1,end);
        return mergeTwo(l1,l2);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0)return nullptr;
        return partition(lists,0,n-1);
    }
};