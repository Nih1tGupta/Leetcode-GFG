class Solution {
public:
    int longestBalanced(string s) {
    int n = s.size();
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        vector<int> freq(26, 0);
        for (int j = i; j < n; j++) {
            freq[s[j] - 'a']++;
            int firstFreq = 0  ; bool balanced = true;
            for (int f : freq) {
                if (f == 0) continue;         // ignore letters not present
                if (firstFreq == 0) firstFreq = f;
                else if (f != firstFreq) {balanced = false; break;}
            }
            if (balanced) { int len = j - i + 1;maxLen = max(maxLen, len);}
        }
    }
    return maxLen;
    }
};