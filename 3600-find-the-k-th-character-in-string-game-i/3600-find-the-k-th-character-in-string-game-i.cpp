class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(s.length()<k){
            int cz=s.length();
            for(int i=0;i<cz;i++){
               char nxt=((s[i]-'a'+1)%26)+'a';
               s+=nxt;
            }
        }
        return s[k-1];
    }
};