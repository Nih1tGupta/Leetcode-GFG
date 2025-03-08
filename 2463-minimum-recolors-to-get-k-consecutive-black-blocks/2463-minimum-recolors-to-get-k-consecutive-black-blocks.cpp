class Solution {
public:
    int minimumRecolors(string b, int k) {
        int op=0;int mini=INT_MAX;
        int i=0;int j=0;
        int n=b.length();
        while(j<n){
           if(b[j]=='W'){op++;}
           if(j-i+1==k){
            mini=min(mini,op);
            if(b[i]=='W'){op--;}
            i++;
           }
           j++;
        }
    return mini;
    }
};