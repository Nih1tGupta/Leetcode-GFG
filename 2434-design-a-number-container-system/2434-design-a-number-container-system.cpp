class NumberContainers {
public:
    map<int,int>mp;  //index->number
    map<int,set<int>>mp1; //number-->set of indices
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(mp.find(index)!=mp.end()){
            mp1[mp[index]].erase(index);
        }
        mp[index]=number;
        mp1[number].insert(index);
    }
    
    int find(int number) {
        // index return karna hai
        if(mp1[number].begin()==mp1[number].end())return -1;
        return *(mp1[number].begin());
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */