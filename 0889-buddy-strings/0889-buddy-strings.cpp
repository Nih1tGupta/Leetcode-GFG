class Solution {
public:
    bool buddyStrings(string s, string g) {
          vector<int>v1(26,0);
          bool dup=0;
          for(char c:s){
            v1[c-'a']++;
            if(v1[c-'a']>1){dup=1;}
          }
          if(s.size()!=g.size()){return 0;}
          if(s==g){
            return dup;
          }
          int c=0;int f=-1;int l=-1;
          for(int i=0;i<s.size();i++){
            if(s[i]!=g[i]){
                c++;
                if(f==-1)f=i;
                else{l=i;}
            }
          }
          return (c==2 and s[f]==g[l] and s[l]==g[f]);
    }
};