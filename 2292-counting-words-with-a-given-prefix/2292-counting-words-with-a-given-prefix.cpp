class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int l=pref.length();int c=0;
        for(auto it:words){
            if(it.substr(0,l)==pref){c++;}
        }
        return c;
    }
};