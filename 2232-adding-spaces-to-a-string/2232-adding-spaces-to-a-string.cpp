class Solution {
public:
    string addSpaces(string s, vector<int>& sp) {
        stringstream res;int idx=0;
        for(int i=0;i<s.length();i++){
            if(idx<sp.size() and i==sp[idx]){res<<' ';idx++;}
            res<<s[i];
        }
        return res.str();
    }
};