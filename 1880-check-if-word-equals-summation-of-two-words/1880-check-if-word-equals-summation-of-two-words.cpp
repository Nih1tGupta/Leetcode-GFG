class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string f="";string s="";string t="";
        for(auto it:firstWord){f+=to_string(it-'a');}
         for(auto it:secondWord){s+=to_string(it-'a');}
         for(auto it:targetWord){t+=to_string(it-'a');}
        if(stoi(f)+stoi(s)==stoi(t)){return true;}
        return false;
    }
};
