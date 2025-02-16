class Solution {
public:
    bool f(int idx,int n,vector<int>&v,vector<bool>&vis){
        if(idx>=v.size()){return 1;}
        if(v[idx]!=-1){return f(idx+1,n,v,vis);}
        for(int num=n;num>=1;num--){
            if(vis[num]){continue;}
            vis[num]=1;
            v[idx]=num;
            if(num==1){
                if(f(idx+1,n,v,vis)==true){return true;}
            }
            else{
                int nxt=idx+v[idx];
                if(nxt<v.size() and v[nxt]==-1){
                    v[nxt]=num;
                    if(f(idx+1,n,v,vis)==true){return true;}
                v[nxt]=-1;
                }
            }
            vis[num]=0;
            v[idx]=-1;
        }
    return 0;
    }
    vector<int> constructDistancedSequence(int n) {
        // o(1)->writre all cases
        // backtrack
        vector<int>v(2*n-1,-1);
        // by obs.
        vector<bool>vis(n+1,0);
        f(0,n,v,vis);
        return v;
    }
};