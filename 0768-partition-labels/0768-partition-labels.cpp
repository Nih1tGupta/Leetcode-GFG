class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>mp(26,-1);
        int n=s.length();
        for(int i=0;i<s.length();i++){
            int idx=s[i]-'a';
            mp[idx]=i;
        }
       int i=0;
       vector<int>v;
       while(i<n){
        int end = mp[s[i]-'a'];
        int j=i;
        while(j<end){
            end= max(end,mp[s[j]-'a']);
            j++;
        }
        v.push_back(j-i+1);
        i=j+1;
       }
       return v;
    }
};