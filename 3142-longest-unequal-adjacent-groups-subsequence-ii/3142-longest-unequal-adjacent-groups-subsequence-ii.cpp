class Solution {
public:
    bool sss(string &s1,string &s2){
        int d=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){d++;}
            if(d>1)return 0;
        }
        return d==1;
    }
    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
           int n = words.size();

        vector<int> dp(n, 1); //dp[i] = longest subsequence length ending at index i
        vector<int> parent(n, -1);
        int longestSub = 1;
        int longestSubIdx = 0;

        //T.C : O(n^2 * L)

        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i-1; j++) {
                if(groups[j] != groups[i] && words[i].length() == words[j].length() &&
                    sss(words[i], words[j])) {
                        
                        if(dp[j] + 1 > dp[i]) {
                            dp[i] = dp[j] + 1;
                            parent[i] = j;

                            if(longestSub < dp[i]) {
                                longestSub = dp[i];
                                longestSubIdx = i;
                            }

                        }

                }
            }
        }

        vector<string> result;
        while(longestSubIdx != -1) { //O(n)
            result.push_back(words[longestSubIdx]);
            longestSubIdx = parent[longestSubIdx];
        }

        reverse(begin(result), end(result)); //O(n)
        return result;

    }
};