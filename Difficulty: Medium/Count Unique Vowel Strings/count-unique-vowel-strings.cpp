class Solution {
  public:
    

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; ++i)
        fact *= i;
    return fact;
}

int countDistinctVowelStrings(const string& s) {
    unordered_map<char, int> freq;
    unordered_set<char> vowelSet;

    for (char ch : s) {
        if (isVowel(ch)) {
            freq[ch]++;
            vowelSet.insert(ch);
        }
    }

    if (vowelSet.empty()) return 0;

    long long waysToSelect = 1;
    for (char ch : vowelSet) {
        waysToSelect *= freq[ch]; // pick one occurrence per vowel
    }

    long long permutations = factorial(vowelSet.size()); // permute selected vowels
    return waysToSelect * permutations;
}
    int vowelCount(string& s) {
        // code here
        return countDistinctVowelStrings(s);
    }
};