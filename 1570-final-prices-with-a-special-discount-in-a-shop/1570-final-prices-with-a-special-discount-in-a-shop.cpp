class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        // vector<int>v(n,0);
        for(int i=0;i<n;i++){
            int mini=prices[i];
            for(int j=i+1;j<n;j++){
                if(mini>=prices[j]){prices[i]-=prices[j];break;}
            }
        }
        return prices;
    }
};