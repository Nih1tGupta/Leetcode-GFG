class Solution {
public:
    unordered_set<string>st;
        vector<string>res;
     void solve(int idx,string& curr ,string& s){
         if(idx>=s.length()){res.push_back(curr);return;}
         for(int j=idx;j<s.length();j++){
             string temp=s.substr(idx,j-idx+1);
             if(st.count(temp)){
                  string tempp=curr;
                 if(!curr.empty()){curr+=" ";}
                 
                 curr+=temp;
                 solve(j+1,curr,s);
                 curr=tempp;
             }
             
         }
         
         
         
     }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        for(auto &it:wordDict){
            st.insert(it);
        }
        string curr="";
        solve(0,curr,s);
        return res;
    }
};