class Solution {
public:
    int maximumLength(string s) {
        map<string,int>mp;
        for(int i=0;i<s.length();i++){
            string str;
            for(int j=i;j<s.length();j++){
                if(str.empty() || str.back()==s[j]){str.push_back(s[j]);mp[str]++;}
                else{break;}
            }
        }
        int maxi=0;
        for(auto it:mp){
            string str=it.first;
            if(it.second>=3 and str.length()>maxi){maxi=str.length();}
        }
        if(maxi==0)return -1;
        return maxi;
    }
};