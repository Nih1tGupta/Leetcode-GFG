class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3){return false;}
         bool hasVowel = false;
    bool hasConsonant = false;
        for (char c : word) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                hasVowel = true;
            } else {
                hasConsonant = true;
            }
        } else if (isdigit(c)) {
            continue;
        } else {
            return false;
        }
    }

    return hasVowel && hasConsonant;
    }
};