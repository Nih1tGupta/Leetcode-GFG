class Solution {
public:
    void solve(string digit,string map[],vector<string>&ans,int idx,string s){
        // base
        if(idx>=digit.length()){ans.push_back(s);return;}
        int num=digit[idx]-'0';
        string value= map[num];
        for(int i=0;i<value.length();i++){
            s.push_back(value[i]);
            solve(digit,map,ans,idx+1,s);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string s="";
        vector<string>ans;
        if(digits.length()==0){return ans;}
        solve(digits,map,ans,0,s);
    return ans;
    }
};