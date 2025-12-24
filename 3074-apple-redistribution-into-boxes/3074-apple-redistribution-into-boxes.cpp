class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& c) {
        int s=0;
        for(auto it:apple){s+=it;}
        sort(c.begin(),c.end(),greater<int>());
        int op=0; int ss=0;
        for(auto it:c){
            if(ss>=s)return op;
            ss+=it;op++;
        }
        return op;
    }
};