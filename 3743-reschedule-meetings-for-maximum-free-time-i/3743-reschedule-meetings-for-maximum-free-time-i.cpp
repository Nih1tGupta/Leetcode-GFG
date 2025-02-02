class Solution {
public:
    int maxFreeTime(int et, int k, vector<int>& s, vector<int>& e) {
        int maxi=0;
        int n=s.size();
        vector<int>gap(n+1);
        gap[0]=s[0]; gap[n]=et-e[n-1];
        for(int i=1;i<e.size();i++){
            gap[i]=(s[i]-e[i-1]);
        }
        int w=0;
        for(int i=0;i<=k;i++){
            w+=gap[i];
        }
        maxi=w;
        for(int i=k+1;i<=n;i++){
            w+=gap[i]-gap[i-(k+1)];
            maxi=max(maxi,w);
        }
        return maxi;
    }
};