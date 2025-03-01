class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int>res;
        set<int>st;
        for(int i=0;i<n;i++){st.insert(i);}
        for(const auto &it:queries){
            int s=it[0]; int e=it[1];
            auto lb=st.lower_bound(s+1);
            auto ub=st.lower_bound(e);
            st.erase(lb,ub);
            res.push_back(st.size()-1);
        }
        return res;
    }
};