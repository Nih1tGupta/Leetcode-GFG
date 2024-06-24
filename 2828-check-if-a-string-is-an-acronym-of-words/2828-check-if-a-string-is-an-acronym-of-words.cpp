class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ss;
        if(words.size()!=s.length()){return false;}
        for(int i=0;i<words.size();i++){
            ss+=words[i][0];                
            }
        
    if(ss==s)return true;
    return false;
        
    }
};