class Solution {
public:
   string destCity(vector<vector<string>>& paths) {
        int n = paths.size();string str="";
        unordered_map<string, bool> mp;
        for(int i=0; i<n; i++){
            string s = paths[i][0];
            mp[s] = true;
        }

        for(int i=0; i<n; i++){
            string s = paths[i][1];
            if(mp[s] == false){
                return s;
            }
        }
       return str;
    }
};