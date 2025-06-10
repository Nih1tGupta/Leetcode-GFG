class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;
        int maxi=1;int mini=1000;
        for(auto it:s){mp[it-'a']++;}
        for(auto it:mp){
            if(it.second%2==1){maxi=max(maxi,it.second);}
            if(it.second%2==0){mini=min(mini,it.second);}
        }
    return maxi-mini;
    }
};