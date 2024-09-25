class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans;
        string l=strs[0];
        string r=strs[strs.size()-1];
        for(int i=0;i<l.size();i++){
            if(l[i]==r[i])ans.push_back(l[i]);
            else{break;}
        }
        return ans;
    }
};