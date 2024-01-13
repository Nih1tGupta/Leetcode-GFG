class Solution {
public:
    int minSteps(string s, string t) {
     int str[26]={0};
        int ttr[26]={0};
        for(int i=0;i<s.length();i++){
            str[s[i]-'a']++;
            ttr[t[i]-'a']++;
        }
         int ans=0;
        for(int i=0;i<26;i++){
       
        if(str[i]>ttr[i]){
            ans+=(str[i]-ttr[i]);
        }
    }
        return ans;
    }
};

