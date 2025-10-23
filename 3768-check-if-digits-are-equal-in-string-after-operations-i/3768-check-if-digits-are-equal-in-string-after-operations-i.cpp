class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.length()>2){
            string ss;
            for(int i=0;i<s.length()-1;i++){
                int f=s[i]-'0';
                int sec=s[i+1]-'0';
                int dig=(f+sec)%10;
                ss+=to_string(dig);
            }
            s=ss;
        }
        return (s[0]==s[1]);
    }
};