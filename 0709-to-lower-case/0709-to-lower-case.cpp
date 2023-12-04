class Solution {
public:
    string toLowerCase(string s) {
         char diff = 'a' - 'A';
        for(int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += diff;
            }
        }
        return s;
    }
};