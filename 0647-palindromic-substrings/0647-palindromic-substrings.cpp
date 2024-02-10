class Solution {
     int dp[1001][1001];
public:
    
  
     bool check(string &s,int a,int b){
     
//         base case
        if(a>b){return true;}
         if(dp[a][b]!=-1){return dp[a][b];}
     if(s[a]==s[b]){return  dp[a][b]= check(s,a+1,b-1);}
        return false;
    }
    
    int countSubstrings(string s) {
     int n=s.length();   int count=0;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(check(s,i,j)){count++;}
            }
        }
        return count;
    }
};