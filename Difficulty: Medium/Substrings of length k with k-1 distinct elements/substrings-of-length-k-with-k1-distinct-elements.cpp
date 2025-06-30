class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
        int n = s.length();
    int i = 0, j = 0;
    unordered_map<char, int> mp;
    int c = 0;

    while (j < n) {
        mp[s[j]]++;

        if (j - i + 1 == k) {
            if (mp.size() == k - 1) {
                c++;
            }

            // Slide the window
            mp[s[i]]--;
            if (mp[s[i]] == 0) {
                mp.erase(s[i]);
            }
            i++;
        }

        j++;
    }

    return c;
    }
};