class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.length();int j=0;
        string ans=string(n,'0');
        for(int i=0;i<n;i++){
                if(s[i]=='1'){if(ans[n-1]=='1'){
                ans[j]='1';j++;
                }
            
            else{
                ans[n-1]='1';
                
            }
                             }
        }
    
        return ans;
    }
};