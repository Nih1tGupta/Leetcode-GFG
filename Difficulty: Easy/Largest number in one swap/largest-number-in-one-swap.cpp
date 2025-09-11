class Solution {
  public:
    string largestSwap(string &s) {
        vector<int> mp(10,-1);
        for(int i = 0; i < s.length(); i++){mp[s[i]-'0'] = i;}
        
        for(int i = 0; i < s.length(); i++){
            int num=s[i]-'0';
            for(int j = 9; j >= 0; j--){
                if(mp[j]!=-1 and mp[j]>i and j>num){swap(s[i], s[mp[j]]);return s;}
            }
        }
        return s;
    }
};