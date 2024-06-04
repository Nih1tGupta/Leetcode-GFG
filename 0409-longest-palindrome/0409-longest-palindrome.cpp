class Solution {
public:
    int longestPalindrome(string s) {
        set<char>st;int c=0;
        for(int i=0;i<s.length();i++){
            if(st.count(s[i])){c+=2;st.erase(s[i]);}
            else{st.insert(s[i]);}
        }
        if(!st.empty()){c+=1;}
        return c;
    }
};