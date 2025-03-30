class Solution {
public:
    bool ispalin(string s){
        int i=0;int j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){return 0;}
            i++;j--;
        }
        return 1;
    }
    int longestPalindrome(string s, string t) {
        int maxi=1;
        for(int i=0;i<s.length();i++){
            string d="";
            for(int j=i;j<s.length();j++){
                d+=s[j];
                if(ispalin(d)){maxi=max(maxi,j-i+1);}
                for(int k=0;k<t.length();k++){
                    string d2="";
                    for(int l=k;l<t.length();l++){
                        d2+=t[l];
                        if(ispalin(d2)){maxi=max(maxi,l-k+1);}
                        if(ispalin(d+d2)){
                            int x=d.length() + d2.length();
                            maxi=max(maxi,x);
                        }
                    }
                }
            }
        }
        return maxi;
    }
};