class Solution {
public:
    int t[100001][2][3];
    int mod=1e9+7;
    int solve(int n,int a,int l){
        if(a>=2 || l>=3){return 0;}
        if(n==0){return 1;}
        if(t[n][a][l]!=-1){return t[n][a][l];}
        int A=solve(n-1,a+1,0)%mod;
        int P=solve(n-1,a,0)%mod;
        int L=solve(n-1,a,l+1)%mod;
        return t[n][a][l]=((A+L)%mod+P)%mod;
    }
    int checkRecord(int n) {
        memset(t,-1,sizeof(t));
        return  solve(n,0,0);
        
    }
};