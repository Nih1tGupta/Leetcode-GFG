class Solution {
public:
    int maximumLength(string s) {
        int n=s.length();
        vector<vector<int>>mat(26,vector<int>(n+1,0));
        char prev=s[0];int len=0;
        for(int i=0;i<n;i++){
            char curr=s[i];
            if(curr==prev){
                len++;
                mat[curr-'a'][len]+=1;
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