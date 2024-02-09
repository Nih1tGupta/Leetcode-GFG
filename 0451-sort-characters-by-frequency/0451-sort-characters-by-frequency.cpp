class Solution {
public:
    string frequencySort(string s) {
     unordered_map<char,int>mp;
        for(auto ch:s){mp[ch]++;}
        vector<vector<char>>bucket(s.length()+1);
        for(auto [ch,fq]:mp){bucket[fq].push_back(ch);}
        string ss="";
        for(int i=s.length();i>=1;i--){
            for(auto ch:bucket[i]){
                ss.append(i,ch);
            }
        }
        return ss;
    }
};