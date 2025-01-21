class Solution {
public:
    int solve(int mp[]){
        int maxi=-1; int mini=1e9;
        for(int i=0;i<26;i++){
            maxi=max(maxi,mp[i]);
            if(mp[i]>=1){mini=min(mini,mp[i]);}
        }
        return maxi-mini;
    }
    int beautySum(string s) {
        int c=0;
        
        for(int i=0;i<s.length();i++){
            int freq[26]={0};
            for(int j=i;j<s.length();j++){
                freq[s[j]-'a']++;
                c+=solve(freq);
            }
        }
        return c;
    }
};