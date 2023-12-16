class Solution {
public:
    bool isAnagram(string s, string t) {
      int freqs[26]={0};      
      int freqt[26]={0};
        for(auto it: s){freqs[it-'a']++;} 
        for(auto it: t){freqt[it-'a']++;}
        for(int i=0;i<26;i++){
            if(freqs[i]!=freqt[i]){
                return false;
            }
        }
        return true;
    }
};