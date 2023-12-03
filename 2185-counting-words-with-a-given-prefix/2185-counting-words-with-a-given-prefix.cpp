class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(auto & it:words){
            if(it.find(pref)==0){count++;}
        }
        return count;
    }
};
