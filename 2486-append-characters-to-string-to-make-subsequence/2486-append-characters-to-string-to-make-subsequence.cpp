class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0;int j=0;int c=0;
        while(i<s.length() and j <t.length()){
            if(s[i]==t[j]){c++;i++;j++;}
           else{i++;}
            
        }
        return t.length()-c;
    }
};