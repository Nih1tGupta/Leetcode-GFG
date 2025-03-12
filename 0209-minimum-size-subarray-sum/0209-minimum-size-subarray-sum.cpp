class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MAX;int flag=0;
        // for(int i=0;i<n;i++){
        //     int len=0; long long sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum>=target){
        //             flag=1;
        //             maxi=min(maxi,j-i+1);
        //             break;
        //         }
        //     }
        // }
        //     if(flag==0){return 0;}
        //     return maxi;
        int i=0; long long sum=0;
        for(int j=0;j<n;j++){
            sum+=nums[j];
            while(sum>=target and i<n){
                maxi=min(maxi,j-i+1);
                sum-=nums[i];
                flag=1;i++;
            }
        }
        if(flag==0)return 0;
        return maxi;
    }
};