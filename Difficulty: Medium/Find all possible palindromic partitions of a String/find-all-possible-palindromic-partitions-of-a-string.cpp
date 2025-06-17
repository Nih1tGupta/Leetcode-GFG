class Solution {
  public:
    void solve(int index,vector<vector<string>>& ans, vector<string>& temp, string S) {
        if(index==S.size()) {
            ans.push_back(temp);
            return;
        }
        
        for(int i=index;i<S.size();i++) {
            if(isPossible(S,index,i)) {
                temp.push_back(S.substr(index, i-index+1));
                solve(i+1,ans,temp,S);
                temp.pop_back();
            }
        }
    }
    
    bool isPossible(string s, int start, int end) {
        while(start<end) {
            if(s[start]!=s[end]) return false;
            start++,end--;
        }
        return true;
    }
    vector<vector<string>> palinParts(string &s) {
        // code here
        vector<vector<string>>ans;
       vector<string>temp;
       solve(0,ans,temp,s);
       return ans;
    }
};