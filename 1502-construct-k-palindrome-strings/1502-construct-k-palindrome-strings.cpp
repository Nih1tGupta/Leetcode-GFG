class Solution {
public:
    bool canConstruct(string s, int k) {
        int n=s.length();int c=0;
        if(n<k)return 0;
        if(n==k)return 1;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){mp[s[i]]++;}
        for(auto it:mp){if(it.second%2==1)c++;}
        return (c<=k);
    }
};