class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)return 1;
        int mp1[26]={0}; int mp2[26]={0};
        int diff=0;
        for(int i=0;i<s1.size();i++){
            char ch=s1[i]; char ch2=s2[i];
            if(ch!=ch2){diff++;}
            if(diff>2)return 0;
            mp1[ch-'a']++;
            mp2[ch2-'a']++;
        }
        for(int i=0;i<26;i++){
            if(mp1[i]!=mp2[i])return 0;
        }
        return 1;
    }
};