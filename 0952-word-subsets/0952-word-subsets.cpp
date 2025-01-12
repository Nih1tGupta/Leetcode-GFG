class Solution {
public:
bool f(vector<int>&f,vector<int>&t){
        for(int i=0;i<26;i++){
            if(f[i]>t[i])return 0;
        }
        return 1;
}
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
      vector<int>final(26,0);
      for(string &word:words2){
         vector<int>v(26,0);
        for(char &ch:word){
            v[ch-'a']++;
         final[ch-'a']=max(final[ch-'a'],v[ch-'a']);
        }
      }
     vector<string>s;
     for(string &word:words1){
         vector<int>vv(26,0);
        for(char &ch:word){vv[ch-'a']++;}
        if(f(final,vv)==true){s.push_back(word);}
     }
     return s;
    }
};