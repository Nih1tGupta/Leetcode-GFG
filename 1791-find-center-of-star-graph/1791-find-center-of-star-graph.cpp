class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>mp;
        for(vector<int>it:edges){
            mp[it[0]]++;
            mp[it[1]]++;
        }
        for(int i=1;i<=edges.size()+1;i++){
            if(mp[i]>1)return i;
        }
        return 0;
    }
};