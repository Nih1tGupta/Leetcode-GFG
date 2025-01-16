class LRUCache {
public:
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
// new node +if-else ->not required
node*head=new node(-1,-1);
node*tail=new node(-1,-1);

// finding -store
unordered_map<int,node*>mp;
int sz;
// add + delete
    LRUCache(int capacity) {
        // init. size
        sz=capacity;
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
    int get(int key) {
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

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */