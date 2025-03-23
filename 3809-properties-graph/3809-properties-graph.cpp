class Solution {
public:
    bool dist(vector<int>&a,vector<int>&b,int k){
         unordered_map<int, int> mp;
        int count=0;
        for(int& num:a) {
            mp[num]++;
        }
        for(int& num:b) {
            if(mp.find(num) != mp.end() && mp[num]!=-1) {
                count++;
                mp[num]=-1;
            }
        }

    return (count>=k);
    }
    void dfs(int i,vector<bool>&vis,vector<vector<int>>&adj){
        vis[i]=1;
        for(auto &it:adj[i]){
            if(!vis[it]){
            dfs(it,vis,adj);}
        }
    }
    int numberOfComponents(vector<vector<int>>& prop, int k) {
        int n=prop.size();
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
            vector<int>a=prop[i];
            for(int j=i;j<n;j++){
                vector<int>b=prop[j];
                if(i!=j and dist(a,b,k)){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
        }
        }
        vector<bool>vis(n,0);
        int c=0;
        for(int i=0;i<n;i++){
            if(vis[i]==0){dfs(i,vis,adj);c++;}
        }
        return c;
    }
};