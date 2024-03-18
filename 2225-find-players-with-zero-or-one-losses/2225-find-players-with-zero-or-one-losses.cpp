class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>v1; vector<int>v2;
        vector<vector<int>>v3;
        unordered_map<int,int>mp;
        set<int>win; set<int>lose;
        for(auto it:matches){
            win.insert(it[0]);
            win.insert(it[1]);
            mp[it[1]]++;
        }
        for(auto it:win){
            if(mp.find(it)==mp.end()){v1.push_back(it);}
        }
          for(auto it:win){
            if(mp[it]==1){v2.push_back(it);}
        }
        v3.push_back(v1);        v3.push_back(v2);
        return v3;
    }
};