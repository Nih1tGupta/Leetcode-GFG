/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    
    Node* merge(Node*l1,Node*l2){
        Node*dummy= new Node(-1);
        Node*res=dummy;
        while(l1!=nullptr and l2!=nullptr){
            if(l1->data <l2->data){
                res->bottom=l1;
                res=l1;
                l1=l1->bottom;
            }
            else {
                res->bottom=l2;
                res=l2;
                l2=l2->bottom;
            }
        }
        if(l1){res->bottom=l1;}
        if(l2){res->bottom=l2;}
        // if(dummy->bottom!=nullptr){dummy->bottom->next==nullptr;}
        return dummy->bottom;
    }
    Node *flatten(Node *root) {
        // Your code here
        if(root==nullptr || root->next==nullptr)return root;
        Node*newHead= flatten(root->next);
        root= merge(root,newHead);
        return root;
    }
};