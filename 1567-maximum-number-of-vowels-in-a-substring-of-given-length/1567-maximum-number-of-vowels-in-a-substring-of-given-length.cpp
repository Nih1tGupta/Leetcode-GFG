class Solution {
public:
    bool isvowel(char &c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){return 1;}
        return 0;
    }
    int maxVowels(string s, int k) {
        
        // for(int i=0;i<=s.length()-k;i++){
            // int c=0;
        //     for(int j=i;j<i+k;j++){
        //         if(isvowel(s[j])){c++;}
        //     }
        //     maxi=max(maxi,c);
        // }
        // return maxi;

        // sliding window
        int i=0;int j=0;
        int n=s.size();
      int maxi=0;int c=0;
            while(j<n){
                if(isvowel(s[j])){c++;}
                if(j-i+1==k){
                       maxi=max(maxi,c);
                    if(isvowel(s[i])){c--;}
                   i++;
                }
                j++;
        }
        return maxi;
    }
};