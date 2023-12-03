class Solution {
public:
    bool check(string s){
        int i=0;int j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){return false;}
            else{i++;j--;}
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(check(words[i])){return words[i];}
        }
        return "";
    }
};