class Solution {
public:
    string makeFancyString(string s) {
      char prev=s[0];string ans="";
      int fr=1;ans.push_back(prev);
    for(int i=1;i<s.length();i++){
        if(s[i]==prev)fr++;
        else{prev=s[i];fr=1;}
        if(fr<3)ans.push_back(s[i]);
    }
    return ans;
    }
};