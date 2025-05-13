class Solution {
public:
const int MOD = 1e9 + 7;
    int lengthAfterTransformations(string s, int t) {
        // while(t--){
        //      string str="";
        //     for(int i=0;i<s.length();i++){
        //         if(s[i]=='z'){
        //             str+='a';str+='b';
        //         }
        //         else{
        //             char ch=s[i];
        //             str+=(char)(ch+1);
        //         }
        //     }
        // s=str;
        // }
        // return s.length()%MOD;


        // map<char,vector<int>>mp(26);
        // for(char ch:s){mp[ch].push_back(i);}
       
       vector<int>prev(26,0);
       for(char ch:s){prev[ch-'a']++;}
        while(t--){
            vector<int>v(26,0);
            for(int i=0;i<26;i++){
                if(i==25){
                    v[0]=(v[0]+prev[i])%MOD;
                    v[1]=(v[1]+prev[i])%MOD;
                }
                else{
                    v[i+1]=(v[i+1]+prev[i])%MOD;
                }
            }
            prev=v;
        }
        int c=0;
    for(auto it:prev){
        c=(c+(it%MOD))%MOD;
    }
    return c;
    }
};