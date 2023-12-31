class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.length();
        int count = -1;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            char c= s[i];
            if(mp.find(c)==mp.end()){mp[c]=i;}
            else{count = max(count,i-mp[c]-1);}
        }
        return count;
    }
};