class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int cost=0;int l=0;
        int i=0;int j=0;
        while(j<s.length()){
            cost +=abs(s[j]-t[j]);
            while(cost>maxCost){
            cost-=abs(s[i]-t[i]);
            i++;
            }
            l= max(l,j-i+1);j++;
        }
        return l;
    }
};