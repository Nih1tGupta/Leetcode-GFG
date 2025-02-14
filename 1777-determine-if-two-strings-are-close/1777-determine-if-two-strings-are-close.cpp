class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.length(); int m=word2.length();
        if(n!=m)return 0;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(auto it:word1){v1[it-'a']++;}
        for(auto it:word2){v2[it-'a']++;}

          for(int i=0;i<26;i++){
            if( (v1[i]==0 and v2[i]!=0) || (v1[i]!=0 and v2[i]==0) )return 0;
          }
        //   sorting is done bcoz ...only value matters not the order
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return (v1==v2);
    }
};