class Solution {
  public:
     void f(int i , string& s,vector<int> & arr, vector<string>& ans,unordered_map<int, string>&mpp){
        if(i==arr.size()){
            ans.push_back(s);
            return ;
        }
        if (mpp.find(arr[i]) == mpp.end()) { // for the casse of 1 =""
            f(i + 1, s, arr, ans,mpp);
            return;
        }
        
        string temp = mpp[arr[i]];
        for(char c:temp){
            s.push_back(c);
            f(i+1,s,arr,ans,mpp);
            s.pop_back();
        }
        
    }
    vector<string> possibleWords(vector<int> &arr) {
        unordered_map<int, string> mpp = {
            {2, "abc"}, {3, "def"},{4, "ghi"},{5, "jkl"},
            {6, "mno"},{7, "pqrs"},{8, "tuv"}, {9, "wxyz"}
        };
        string s="";
        vector<string> ans;
        f(0,s,arr,ans,mpp);
        return ans;
    }
};