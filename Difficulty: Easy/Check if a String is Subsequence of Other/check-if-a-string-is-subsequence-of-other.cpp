class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        // code here
         if(s1.size()<s2.size())
        {
            swap(s1,s2);
        }
          int n1 = s1.size(),n2 = s2.size();
        int i = 0,j = 0;
        while(i<n1 && j<n2)
        {
            j = j + (s1[i] == s2[j]);
            i = i + 1;
        }
        return (j==n2);
    }
};