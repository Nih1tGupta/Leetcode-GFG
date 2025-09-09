class Solution {
  public:
    string largestSwap(string &s) {
        // code here
        int n = s.length();
    // A single character string is already as large as it can be.
    if (n <= 1) {
        return s;
    }

    // Step 1: Create an array to store the last seen index of each digit ('0'-'9').
    // This allows us to quickly find the rightmost position of any digit.
    std::vector<int> last_occurrence(10, -1);
    for (int i = 0; i < n; ++i) {
        last_occurrence[s[i] - '0'] = i;
    }

    // Step 2: Iterate through the string from left to right.
    // For each position 'i', we want to see if there's a larger digit
    // to its right that we can swap with.
    for (int i = 0; i < n; ++i) {
        int current_digit = s[i] - '0';

        // Step 3: Find the best possible swap partner for the current digit.
        // We check from the largest possible digit (9) downwards.
        for (int d = 9; d > current_digit; --d) {
            // If a larger digit 'd' exists later in the string (its last
            // occurrence is to the right of 'i'), we've found our optimal swap.
            if (last_occurrence[d] > i) {
                // Swap the current character with the last occurrence of the
                // largest digit found. Then, return immediately.
                std::swap(s[i], s[last_occurrence[d]]);
                return s;
            }
        }
    }

    // Step 4: If the loop completes, it means no beneficial swap was found.
    // The string is already in its lexicographically largest form (e.g., "987").
    return s;
    }
};