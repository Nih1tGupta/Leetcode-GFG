class Solution {
public:
    void solve(string &tiles,unordered_set<string>&st,vector<bool>&v,string &curr){
        st.insert(curr);
        for(int i=0;i<tiles.length();i++){
            if(v[i]){continue;}
            v[i]=true;
            curr.push_back(tiles[i]);
            solve(tiles,st,v,curr);
            v[i]=false;
            curr.pop_back();
        }

    }
    int numTilePossibilities(string tiles) {
        // generate all possible permutation
        int n=tiles.length();
        vector<bool>v(n,false);
        unordered_set<string>st;
        string curr="";
        solve(tiles,st,v,curr);
        return st.size()-1;
    }
};