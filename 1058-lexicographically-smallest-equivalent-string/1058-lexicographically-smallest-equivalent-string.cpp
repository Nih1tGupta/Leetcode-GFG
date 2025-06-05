class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        unordered_map<char,set<char>>mp;
        for(int i=0;i<s1.length();i++){
            mp[s1[i]].insert(s2[i]);
            mp[s2[i]].insert(s1[i]);
        }
         for(int i=0;i<3;i++){
            for(auto x:mp){
                for(auto y:x.second){
                    for(auto z:mp[y]){
                        mp[x.first].insert(z);
                    }
                }
            }
        }
        string ans;
        int size=baseStr.size();
        for(int i=0;i<size;i++){
            char ch=baseStr[i];
            if(mp.find(ch)!=mp.end()){
                set<char> st = mp[ch];
                ans = ans + min( ch , *(st.begin()) );
            }
            else{
                ans+=baseStr[i];
            }
        }
        return ans;
    }
};