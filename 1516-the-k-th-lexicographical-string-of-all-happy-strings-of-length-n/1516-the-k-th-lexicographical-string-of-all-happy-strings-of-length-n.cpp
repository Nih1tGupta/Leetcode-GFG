class Solution {
public:
    void solve(vector<string>&v,int n,int k,string s){
        if(s.size()==n){
            v.push_back(s);
            return;
        }
        for(char ch:{'a','b','c'}){
            if(s.empty() || s.back()!=ch){
                solve(v,n,k,s+ch);
            }
        }
    }
    string getHappyString(int n, int k) {
        vector<string>v;
        string s="";
        solve(v,n,k,s);
        if(v.size()<k)return "";
        return v[k-1];
    }
};