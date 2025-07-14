class Solution {
  public:
    bool divby13(string &s) {
        // code here
          if ( s.length()==0) {
            return false; // Or handle as an error, depending on requirements.
        }

        int remainder = 0;
        for (int i = 0; i < s.length(); i++) {
            char digitChar = s[i];
            int digit = digitChar - '0'; // Convert char digit to int
            remainder = (remainder * 10 + digit) % 13;
        }

        return remainder == 0;
    }
};