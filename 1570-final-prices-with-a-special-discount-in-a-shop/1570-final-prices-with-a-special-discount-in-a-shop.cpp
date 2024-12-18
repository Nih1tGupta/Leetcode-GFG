class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        // vector<int>v(n,0);
        // for(int i=0;i<n;i++){
        //     int mini=prices[i];
        //     for(int j=i+1;j<n;j++){
        //         if(mini>=prices[j]){prices[i]-=prices[j];break;}
        //     }
        // }
        // return prices;
        // NEXT SMALLER ELEMENT
        stack<int> stk;
        for(int i=0; i<n; i++){
            while(!stk.empty() && prices[stk.top()] >= prices[i]){
                prices[stk.top()] -= prices[i];
                stk.pop();
            }
            stk.push(i);
        }
        return prices;
    }
};