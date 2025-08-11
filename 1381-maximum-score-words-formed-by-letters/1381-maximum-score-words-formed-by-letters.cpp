class Solution {
public:
    int solve(int i, vector<int>& score, vector<string>& words, int currScore, vector<int>& freq) {
    if (i >= words.size()) 
        return currScore;

    // Option 1: skip the current word
    int skipScore = solve(i + 1, score, words, currScore, freq);

    // Option 2: take the current word (if possible)
    vector<int> tempFreq = freq;
    int tempScore = 0;
    bool canTake = true;

    for (char ch : words[i]) {
        tempFreq[ch - 'a']--;
        tempScore += score[ch - 'a'];
        if (tempFreq[ch - 'a'] < 0) {
            canTake = false;
            break;
        }
    }

    int takeScore = currScore;
    if (canTake) {
        takeScore = solve(i + 1, score, words, currScore + tempScore, tempFreq);
    }

    return max(skipScore, takeScore);
}

int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
    vector<int> freq(26, 0);
    for (char ch : letters) {
        freq[ch - 'a']++;
    }
    return solve(0, score, words, 0, freq);
        
    }
};