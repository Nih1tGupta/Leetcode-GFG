class Solution {
  public:
    // bool solve(string &s1,string &s2){
    //     int i=0;
    //     while(i<s2.length()){
    //         if(s1[i]!=s2[i])return 0;
    //     }
    // return 1;
    // }
    const int mod=1e9+7;
    vector<int> search(string &pat, string &txt) {
    //     vector<int>v;
    //     int p=pat.length();
    //     for(int i=0;i<txt.length()-pat.length();i++){
    //         if(txt[i]==pat[i]){
    //             string s1=txt.substr(i,p);
    //             if(solve(s1,pat)==true){v.push_back(i);}
    //         }
    //     }
    // return v;
    // vector<int>ans;
        //   for(int i=0;i<txt.size();i++){
        //       string temp = txt.substr(i,pat.size());
        //       if(temp==pat){
        //           ans.push_back(i+1);
        //       }
        //   }return ans;
        vector<int>ans;
            int txtHash=0,patHash=0;
            int n=txt.size();
            int m=pat.size();
            
            for(int i=0;i<m;i++)
            {
                txtHash = ((txt[i]-'a')+txtHash)%mod;
                patHash = ((pat[i]-'a')+patHash)%mod;
            }
            
            if(txtHash==patHash)
            {
                if(txt.substr(0,m)==pat)
                ans.push_back(1);
            }
            
            for(int i=m,j=0;i<txt.size();i++,j++)
            {
               txtHash = (txtHash-txt[j])%mod;
               txtHash = (txtHash+txt[i])%mod;
               
               if(txtHash==patHash)
               {
                  if(txt.substr(j+1,m)==pat)
                  ans.push_back(j+2);
               }
            }
        return ans;
    }
};