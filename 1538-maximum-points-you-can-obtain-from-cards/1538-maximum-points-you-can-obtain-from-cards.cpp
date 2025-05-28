class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int ls=0; int maxi=0;
        for(int i=0;i<=k-1;i++){ls+=c[i];}
        maxi=max(maxi,ls);
        int rs=0; int idx=c.size()-1;
        for(int j=k-1;j>=0;j--){
            ls-=c[j];
            rs+=c[idx];
            maxi=max(maxi,ls+rs);
            idx--;
        }
    return maxi;
    }
};