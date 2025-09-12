class Solution {
public:
    bool doesAliceWin(string s) {
        int c=0;
        for(char ch:s){if(ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u')c++;}
        return c>0;
    }
};