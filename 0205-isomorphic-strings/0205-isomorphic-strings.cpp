class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){return false;}
        unordered_map<char,vector<int>>mp1;
         unordered_map<char,vector<int>>mp2;
        for(int i=0;i<s.length();i++){mp1[s[i]].push_back(i);}
         for(int i=0;i<t.length();i++){mp2[t[i]].push_back(i);}
        for(int i=0;i<t.length();i++){
            if(mp1[s[i]]!=mp2[t[i]]){return false;}
        }
        return true;
    }
};