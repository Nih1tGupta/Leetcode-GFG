class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        if(t.length()>n){return "";}
        int mini=INT_MAX;
        int count=t.length();
        unordered_map<char,int>mp;
        for(int i=0;i<t.length();i++){mp[t[i]]++;}
        int i=0;int j=0;int idx=0;
        while(j<n){
            char ch=s[j];
            if(mp[ch]>0){count--;}mp[ch]--;
            while(count==0){
                int curr=j-i+1;
                if(mini>curr){mini=curr;idx=i;}
            mp[s[i]]++;
            if(mp[s[i]]>0){count++;}
            i++;
           }
            j++;
        }
        return mini==INT_MAX?"":s.substr(idx,mini);
    }
};