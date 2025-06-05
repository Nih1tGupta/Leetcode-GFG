class Solution {
public:
     bool check(string &s,int a,int b){
//         base case
        if(a>=b){return true;}
        //  if(dp[a][b]!=-1){return dp[a][b];}
     if(s[a]==s[b]){return check(s,a+1,b-1);}
        return false;
    }
    string longestPalindrome(string s) {
           int n=s.length();   int maxi=INT_MIN;
        string ss="";
        // memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(check(s,i,j)){
                    if(j-i+1>maxi){maxi=j-i+1;ss=s.substr(i,j-i+1);}
                }
            }
        }
        return ss;
    }
};