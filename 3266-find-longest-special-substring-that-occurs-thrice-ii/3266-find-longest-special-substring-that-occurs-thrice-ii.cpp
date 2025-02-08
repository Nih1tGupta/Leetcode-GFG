class Solution {
public:
    int maximumLength(string s) {
        int n=s.length();
        // EK STRING ME AGARSAME TYPE KE CHAR KI SUBSTRING FIND KARNA HO TOH
        // MEANS-->AAAA,aaa,aa,a
        // a-1+1+1+1
        // aa->1+1+1
        // aaa->1+1;
        // aaaa->1....length as col-->row as characters
        vector<vector<int>>mat(26,vector<int>(n+1,0));
        char prev=s[0];int len=0;
        for(int i=0;i<n;i++){
            char curr=s[i];
            if(curr==prev){
                len++;
                mat[curr-'a'][len]+=1;
                prev=curr;
            }
            else{
                len=1;
                mat[curr-'a'][1]+=1;
                prev=curr;
            }
        }
        int res=0;
        for(int i=0;i<26;i++){
            int cs=0;
            for(int j=n;j>=1;j--){
                cs+=mat[i][j];
                if(cs>=3){ res=max(res,j);break;}                
          }
        }
        return res==0?-1:res;
    }
};