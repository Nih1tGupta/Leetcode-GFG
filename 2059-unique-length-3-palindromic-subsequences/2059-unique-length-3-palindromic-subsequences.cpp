class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char>st;
        for(int i=0;i<s.length();i++){st.insert(s[i]);}
        int ans=0;
        for(char it:st){
            int l=-1;int r=-1;
            for(int i=0;i<s.length();i++){
                if(s[i]==it){
                    if(l==-1){l=i;}
                    r=i;
                }
            }
            unordered_set<char>stt;
            for(int k=l+1;k<r;k++){
                stt.insert(s[k]);
            }
            ans+=stt.size();
        }
        return ans;
    }
};