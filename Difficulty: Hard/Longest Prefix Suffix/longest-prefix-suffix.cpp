class Solution {
  public:
    int getLPSLength(string &s) {
           int n = s.size();
    
    // initialize LPS array with 0s
    vector<int> lps(n, 0);  

    // length of the previous longest 
    // prefix-suffix
    int len = 0;  
    int i = 1;

    while (i < n) {
        if (s[i] == s[len]) {
            lps[i] = ++len;
            i++;
        } 
        else{
            if (len != 0) {
                // Fall back in the LPS array
                len = lps[len - 1];  
            } 
            else{
                lps[i] = 0;
                i++;
            }
        }
    }

    // lps[n - 1] holds the result for 
    // the entire string
    return lps[n - 1];
        
    }
};