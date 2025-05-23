class Solution {
  public:
    int sumSubstrings(string &s) {
        // code here
        int sum=0;
        for(int i=0;i<s.length();i++){
            int cs=0;
            for(int j=i;j<s.length();j++){
                cs=cs*10+(char(s[j])-'0');
                sum+=cs;
            }
        }
        return sum;
    }
};