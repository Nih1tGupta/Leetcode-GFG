class Solution {
  public:
    string longestString(vector<string> &words) {
        // code here
        string ans; int sz=INT_MIN;
        sort(words.begin(),words.end());
        unordered_map<string,int>mp;
        
        for(auto it:words){mp[it]++;}
        // ab har ek char me jao
        // aur prev check karo
        for(auto &it:words){
            string temp="";
            int cnt=0;
            int n=it.size();
            for(int i=0;i<n;i++){
                temp+=it[i];
                if(mp[temp]!=0){cnt++;}
            }
            if(cnt==n and n>sz){sz=n;ans=it;}
        }
        return ans;
    }
};