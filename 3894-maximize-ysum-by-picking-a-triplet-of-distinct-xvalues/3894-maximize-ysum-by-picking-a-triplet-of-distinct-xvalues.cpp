class Solution {
public:
    static bool comp(pair<int,int>&a,pair<int,int>&b){
        return a.first>b.first;
    }
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        vector<pair<int,int>>v;
        unordered_set<int>st;
        for(int i=0;i<x.size();i++){
            st.insert(x[i]);
            v.push_back({y[i],x[i]});
        }
        if(st.size()<=2)return -1;
        st.clear();
        sort(v.begin(),v.end(),comp);
        int ct=0;int sum=0;
        // int sum=v[0].first;
        // st.insert(v[0].second);
        for(int i=0;i<v.size();i++){
            if(st.find(v[i].second)==st.end()){
                sum+=v[i].first;
                st.insert(v[i].second);
                ct++;
            }
        if(ct==3)return sum;
        }
    return -1;
    }
};