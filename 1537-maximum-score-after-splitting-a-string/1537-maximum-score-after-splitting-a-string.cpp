class Solution {
public:
    int maxScore(string s) {
        int maxi=INT_MIN;
        for(int i=0;i<s.length()-1;i++){
            int c=0;
            for(int j=0;j<=i;j++){
                if(s[j]=='0')c++;
            }
              for(int j=i+1;j<s.length();j++){
                if(s[j]=='1')c++;
            }
            maxi=max(maxi,c);
        }
        return maxi;
    }
};