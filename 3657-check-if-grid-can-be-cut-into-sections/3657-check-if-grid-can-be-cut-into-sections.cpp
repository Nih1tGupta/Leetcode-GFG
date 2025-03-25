class Solution {
public:
    bool checkValidCuts(int n, vector<vector<int>>& rec) {
        vector<pair<int,int>>x;
        vector<pair<int,int>>y;
        for(auto it:rec){
            x.push_back({it[0],it[2]});
        }
        for(auto it:rec){
            y.push_back({it[1],it[3]});
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        vector<pair<int,int>>z;
        for(int i=0;i<x.size();i++){
            if(z.empty()|| x[i].first>=z.back().second){z.push_back({x[i]});}
            else{z.back().second= max(z.back().second,x[i].second);}
        }
        if(z.size()>=3)return true;
        z.clear();
        for(int i=0;i<y.size();i++){
            if(z.empty()|| y[i].first>=z.back().second){z.push_back({y[i]});}
            else{z.back().second= max(z.back().second,y[i].second);}
        }
        if(z.size()>=3)return true;
        return false;
    }
};