class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int>mp;
        char ch='a';
        for(int i=1;i<=26;i++){mp[ch]=26-i+1;ch=ch+1;}
        int sum=0;
        for(int i=0;i<s.length();i++){
            sum+=((i+1)*mp[s[i]]);
        }
        return sum;
    }
};