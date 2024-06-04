class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;int c=0;
        for(int i=0;i<s.length();i++){mp[s[i]]++;}
        bool freq=false;
        for(auto &it:mp){
            if(it.second %2==0){c+=it.second;}
            else{c+=it.second-1;freq=true;}
        }
        if(freq){c++;}
           
        return c;
    }
};