class Solution {
  public:
    long long int solve(string s,int k){
      if(k<0)return 0;int i=0;int j=0;int c=0;
      int m[26]={0};int res=0;
      while(j<s.length()){
          m[s[j]-'a']++;
          if(m[s[j]-'a']==1)c++;
          while(c>k){
              m[s[i]-'a']--;
              if(m[s[i]-'a']==0){c--;};i++;
          }
          res+=(j-i+1);
          j++;
      }
      return res;
  }
    int countSubstr(string& s, int k) {
      return solve(s,k)-solve(s,k-1);
    }
};