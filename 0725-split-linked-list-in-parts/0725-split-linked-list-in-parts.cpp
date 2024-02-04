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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        if(!head){return vector<ListNode*>(k,NULL);}
        ListNode*curr=head;int count=0;
        while(curr!=NULL){count++;curr=curr->next;}
        int parts=count/k;
        int extra= count%k;
        vector<ListNode*>v;
        
        ListNode*curr1=head;
        ListNode*prev=NULL;
//         split
        int split = parts +(extra>0 ? 1 :0);
        if(extra>0){extra--;}
        
        for(int  i=0;i<count;i++){
            if(i==split){
            prev->next=NULL;
                v.push_back(curr1);
                split+=parts +(extra>0 ? 1 :0);
                 if(extra>0){extra--;}
                        }
            prev=curr1;
            curr1=curr1->next;
//             start
            if(i==0){v.push_back(head);}
        }
//         empty
        while(v.size()<k){v.push_back(NULL);}
        return v;
    }
};