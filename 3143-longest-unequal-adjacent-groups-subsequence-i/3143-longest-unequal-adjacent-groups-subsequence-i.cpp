class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& w, vector<int>& g) {
        map<int,int>mp;
        int f=g[0];
        mp[0]++;
        for(int i=0;i<g.size();i++){
            if(f!=g[i]){
                mp[i]++;
                f=g[i];
            }
        }
        vector<string>v;
        for(auto it:mp){
            v.push_back(w[it.first]);
        }
        return v;
    }
};