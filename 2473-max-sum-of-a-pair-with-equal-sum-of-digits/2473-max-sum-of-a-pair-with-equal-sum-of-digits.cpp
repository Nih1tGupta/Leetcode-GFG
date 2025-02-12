class Solution {
public:
    bool check(int a,int b){
        int x=0;int y=0;
        while(a>0){
            x+=(a%10);a/=10;
        }
         while(b>0){
            y+=(b%10);b/=10;
        }
        if(x==y)return 1;
        return 0;
    }
    int maximumSum(vector<int>& nums) {
        int n=nums.size();int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j!=i and check(nums[i],nums[j])){
                    maxi=max(maxi,nums[i]+nums[j]);
                }
            }
        }
        return maxi==INT_MIN?-1:maxi;
    }
};