class Solution {
public:
    bool closeStrings(string word1, string word2) {
     vector<int>v1(26,0);
    vector<int>v2(26,0);
        for(auto it:word1){v1[it-'a']++;}
         for(auto it:word2){v2[it-'a']++;}
        for(int i=0;i<v1.size();i++){
            if((v1[i]==0 and v2[i]!=0) ||(v2[i]==0 and v1[i]!=0)){
                return false;
            }
        }
       sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if( v1==v2){return true;}
        return false;
    }
};








