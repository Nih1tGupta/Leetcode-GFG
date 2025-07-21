class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    //     int maxi=0;
    //     int n=s.length();
    //    int len=0;int l=0;int r=0;
    //    unordered_set<char>st;
    //    for(int r=0;r<n;r++){
    //         if(st.count(s[r])==0){
    //             // st.insert(s[r]);
    //             maxi=max(maxi,r-l+1);
    //         }
    //         else{
    //             while(st.count(s[r])){
    //                 st.erase(s[l]);l++;
    //             }
    //         }
    //         st.insert(s[r]);
    //    }
    //   return maxi;


    //  brute
     int n = s.size();
        int len = 0, maxlen = 0;

        for(int i=0; i<n; i++){
            vector<int> hash (256, -1);
            for(int j=i; j<n; j++){
                if(hash[s[j]] != -1)
                    break;
                else{
                    len = j - i + 1;
                    maxlen = max(len, maxlen);
                  
                }
                  hash[s[j]] = 1;
            }
        }
        return maxlen;

    // vector<int>mp(256,-1);
    // while(r<n){
    //     // c a d b x a b c d
    //     // a b c a a b
    //     // cHeCk kar lo  kya s[r] belongs to (l,r)
    //     // if yes then do updation-
    //     // if(not then do not worry)-> just moeve and update the idx of char at map/
    //     if(mp[s[r]]!=-1){l=max(l,mp[s[r]]+1);}
    //     mp[s[r]]=r;
    //     maxi=max(maxi,r-l+1);
    //     r++;
    // }
    // return maxi;
    }
};