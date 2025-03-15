class Solution {
public:
//    int n, k;
//     int ans = INT_MAX; 

//     void findMinCapability(vector<int>& nums, int idx, int count, int maxValue) {
//         if (count >= k) {
//             ans = min(ans, maxValue);
//             return;
//         }
//         if (idx >= n) return;
//         findMinCapability(nums, idx + 2, count + 1, max(maxValue, nums[idx]));
//         findMinCapability(nums, idx + 1, count, maxValue);
//     }
    bool solve(int value,vector<int>&nums,int k){
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=value){
                c++;i++;
            }
        }
        return (c>=k);
    }
    int minCapability(vector<int>& nums, int k) {
        // this->n = nums.size();
        // this->k = k;
        // findMinCapability(nums, 0, 0, 0);
        // return ans;
        int l=1;int h=*max_element(nums.begin(),nums.end());
        int ans=h;
        while(l<=h){
            int m=l-(l-h)/2;
            if(solve(m,nums,k)){
                ans=m;
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
};