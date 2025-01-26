//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache {
  private:
  public:
    // Constructor for initializing the cache capacity with the given value.
    class node{
    public:
    // key,val,ptr
    int key; int val;
    node*next;node*prev;
    // consrtuctor
    node(int x,int y){
        key=x;
        val=y;
    }
}
;
node*head=new node(-1,-1);
node*tail=new node(-1,-1);

// finding -store
unordered_map<int,node*>mp;
int sz;
    LRUCache(int cap) {
        sz=cap;
        head->next=tail;
        tail->prev=head;
    }
 void deleteit(node*x){
        node*mynext=x->next;
        node*myprev=x->prev;
        myprev->next=mynext;
        mynext->prev=myprev;
    }
    void addit(node*x){
        node*mynext=head->next;
        x->next=mynext;x->prev=head;
        mynext->prev=x; head->next=x;
    }
    // Function to return value corresponding to the key.
    int get(int key) {
        // your code here
         if(mp.find(key)!=mp.end()){
            // return node->val
            node*gett=mp[key];
            int value=gett->val;
            deleteit(gett);
            // addit(gett->key,value);
            addit(gett);
            return value;
        }
        return -1;
    }

    // Function for storing key-value pair.
    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            node* node = mp[key];
            node->val = value;
            deleteit(node);
            addit(node);
        } else {
            if (mp.size() == sz) {
                node* lru = tail->prev;
                deleteit(lru);
                mp.erase(lru->key);
                // delete lru;
            }
            node* tobeadd = new node(key, value);
            addit(tobeadd);
            mp[key] = tobeadd;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);

        int queries;
        cin >> queries;
        while (queries--) {
            string q;
            cin >> q;
            if (q == "PUT") {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->put(key, value);
            } else {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends