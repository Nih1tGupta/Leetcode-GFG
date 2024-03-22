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
    bool check(string s){
        int st=0;int e=s.length()-1;
        while(st<e){
            if(s[st]!=s[e]){return false;}
            st++;e--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
       
        string s;
        while(head!=NULL){s+=(head->val);head=head->next;}
        if(check(s)){return true;}
        
        return false;
    }
};