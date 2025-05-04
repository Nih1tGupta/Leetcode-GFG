class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dom) {
        map<pair<int,int>,int>mp;
        for(auto &d:dom){
            if(d[0]>d[1]){swap(d[0],d[1]);}
            mp[{d[0],d[1]}]++;
        }
        int res=0;
        for(auto &it:mp){
            int freq=it.second;
            res+=(freq)*(freq-1)/2;
        }
        return res;
    }
};