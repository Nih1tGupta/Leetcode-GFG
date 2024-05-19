class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
  int maxi =INT_MIN;
  //       for(int i=n-1;i>=n-k;i--){
  //           int ans=0;
  //           for(int j=i;j>=0;j-=k){
  //               ans +=energy[j];
  //               maxi= max(maxi,ans);
  //           }
  //       }
  //       return maxi;
        vector<vector<int>>v(n+1);
        int c=0;
        for(int i=0;i<n;i++){
            v[c].push_back(energy[i]);c++;
            if(c==k){c=0;}
        }
        for(auto it:v){
            if(it.size()>0){
                int sum=0;
                for(int i=it.size()-1;i>=0;i--){sum+=it[i];maxi= max(maxi,sum);}
            }
        }
        return maxi;
    }
};