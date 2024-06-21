class Solution {
public:
    int maxSatisfied(vector<int>& cus, vector<int>& g, int m) {
       int c=0;int n=cus.size();int un=0;int maxi=0;
        for(int i=0;i<m;i++){if(g[i]==1)un+=cus[i];}
        maxi=un;
        int i=0;int j=m;
        while(j<n){
            un+= cus[j]*g[j];
            un-=cus[i]*g[i];
            maxi=max(maxi,un);
            i++;j++;
        }
        int maxii=maxi;
        for(int i=0;i<n;i++){if(g[i]==0)maxii+=cus[i];}
        return maxii;
    }
};