class Solution {
public:
    int numOfUnplacedFruits(vector<int>& f, vector<int>& b) {
        int c=0;int n=f.size();
        int m=b.size();
        vector<int>vis(n,0);
        vector<int>visb(m,0);
        for(int i=0;i<f.size();i++){
            for(int j=0;j<b.size();j++){
                if( (vis[i]==0 and visb[j]==0) and (f[i]<=b[j]) ){visb[j]=1;vis[i]=1;c++;}
            }
        }
        return f.size()-c;
    }
};