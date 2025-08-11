class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        int mini=0;int maxi=0;int n=prices.size();
        sort(prices.begin(),prices.end());
        int i=0;int j=n-1;
        while(i<=j){
            mini+=prices[i];j-=k;
            i++;
        }
         j=0; i=n-1;
        while(j<=i){
            maxi+=prices[i];i--;
            j+=k;
        }
        return {mini,maxi};
    }
};