class Solution {
public:
    int longestSubstring(string s, int k) {
   int n = s.length();
int maxi = 0;
for (int i = 0; i < n; i++) {
    int mp[26] = {0};  // Frequency map
    for (int j = i; j < n; j++) {
        mp[s[j] - 'a']++;  // Count char at position j

        bool isValid = true;
        for (int c = 0; c < 26; c++) {
            if (mp[c] > 0 && mp[c] < k) {
                isValid = false;
                break;
            }
        }

        if (isValid) {
            maxi = max(maxi, j - i + 1);
        }
    }
}
return maxi;
    }
};