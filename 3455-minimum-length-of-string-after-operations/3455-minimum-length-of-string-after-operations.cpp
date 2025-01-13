class Solution {
public:
    int minimumLength(string s) {
            map<char,int>mp;int n=s.length();int c=0;
            for(int i=0;i<s.length();i++){mp[s[i]]++;}
            for(auto it:mp){
                if(it.second%2==0)c+=2;
                else{c+=1;}
            }
            return c;
    }
};