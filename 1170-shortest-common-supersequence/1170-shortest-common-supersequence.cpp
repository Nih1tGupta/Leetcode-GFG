class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.length(); int m=str2.length();
        vector<vector<int>>v(n+1,vector<int>(m+1));
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0||j==0){v[i][j]=i+j;}
                else if(str1[i-1]==str2[j-1]){
                    v[i][j]=1+v[i-1][j-1];
                }
                else{v[i][j]=1+min(v[i-1][j],v[i][j-1]);}
            }
        }
        string ss="";
        int i=n;int j=m;
        while(i>0 and j>0){
            if(str1[i-1]==str2[j-1]){ss+=str1[i-1];i--;j--;}
            else if(v[i-1][j] <v[i][j-1]){ss+=str1[i-1];i--;}
            else{ss+=str2[j-1];j--;}
        }
        while(i>0){ss+=str1[i-1];i--;}
        while(j>0){ss+=str2[j-1];j--;}
        reverse(ss.begin(),ss.end());
        return ss;
    }
};