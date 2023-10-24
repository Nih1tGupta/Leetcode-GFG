class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        // int len= n.size();
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                ans[i]=ans[i>>1]+1;
            }
            else{
                ans[i]=ans[i>>1];
            }
        }
        return ans;
    }
};