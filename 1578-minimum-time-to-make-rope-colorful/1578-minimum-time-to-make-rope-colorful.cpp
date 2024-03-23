class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        vector<pair<int,int>>v;
        long sum=0;
        for(int i=0;i<colors.size();i++){
            v.push_back({colors[i],neededTime[i]});
        }
        for(int i=0;i<v.size()-1;i++){
            if(v[i].first==v[i+1].first and v[i].second >v[i+1].second){
                swap(v[i].second, v[i+1].second);
            }
        }
        for(int i=0;i<v.size()-1;i++){
            if(v[i].first==v[i+1].first){sum+=v[i].second;}
        }
        return sum;
    }
};