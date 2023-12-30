class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>mp;
        int n=words.size();
        for( string & word : words){
            for(char &ch :word){
                mp[ch]++;
            }
        }
        for(auto it: mp){
            int fr= it.second;
            if(fr%n!=0){return 0;}
        }
        return 1;
    }
};