class Solution {
public:
    bool checkValidCuts(int n, vector<vector<int>>& rec) {
        vector<pair<int,int>>r;
        vector<pair<int,int>>c;
        for(auto &it:rec){
            r.push_back({it[0],it[2]});
        }
         for(auto &it:rec){
            c.push_back({it[1],it[3]});
        }
        sort(r.begin(),r.end());
        sort(c.begin(),c.end());
        vector<pair<int,int>>mr;
        for(int i=0;i<r.size();i++){
            if(mr.empty() || r[i].first>=mr.back().second){mr.push_back(r[i]);}
            else{mr.back().second=max(mr.back().second,r[i].second);}
        }
        if(mr.size()>=3)return true;
        vector<pair<int,int>>mc;
        for(int i=0;i<c.size();i++){
            if(mc.empty() || c[i].first>=mc.back().second){mc.push_back(c[i]);}
            else{mc.back().second=max(mc.back().second,c[i].second);}
        }
        if(mc.size()>=3)return true;
        return false;

    }
};