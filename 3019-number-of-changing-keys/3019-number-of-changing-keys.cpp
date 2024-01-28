class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;
        for(int i=0;i<s.length()-1;i++){
            if( abs((s[i]-'a')-(s[i+1]-'a')) !=32 and (s[i]!=s[i+1]) ){count++;}
            
        }
        return count;
    }
};