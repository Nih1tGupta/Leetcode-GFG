class Solution {
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        //  toposort- intutuin
        // v depend on u -so preserve state--???? matrix (node,color)
        unordered_map<int,vector<int>>adj; // adj list

        int n=colors.size();  // itne nodes hai 
        vector<int>ind(n,0);
        for(auto it:edges){
            int u=it[0]; int v=it[1];
            adj[u].push_back(v);
            ind[v]++;
        }
        queue<int>q;
        vector<vector<int>>t(n,vector<int>(26,0));
        for(int i=0;i<n;i++){
            if(ind[i]==0){q.push(i); t[i][colors[i]-'a']=1;}
        }
        int ans=0;
        int ct=0;
        while(!q.empty()){
            int x=q.front(); q.pop();
            ct++;
             ans= max(ans, t[x][colors[x]-'a']);
           
            for(auto it:adj[x]){
                for(int i=0;i<26;i++){
                    t[it][i]= max(t[it][i], t[x][i]+(colors[it]-'a'==i))
                    ;
                }
                 ind[it]--;
            if(ind[it]==0)q.push(it);
            }
           
        }
        if(ct<n)return -1;
        return ans;
    }
};