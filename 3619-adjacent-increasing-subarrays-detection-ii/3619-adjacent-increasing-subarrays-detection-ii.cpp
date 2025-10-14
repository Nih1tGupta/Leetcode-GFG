class Solution {
public:

    bool solve(int k,vector<int>&nums,vector<int>&inc){
        for(int i=0;i<nums.size();i++){
            if(inc[i]>=k && i+k<nums.size() && inc[i+k]>=k){return true;}
        }
        return false;
    }
    int maxIncreasingSubarrays(vector<int>& nums) {
        // first binary search on value of k
        int ans=1; int n=nums.size();
        vector<int> inc(n,1);
        int c=1;
        for(int i = n-2; i >=0; i--) {
            if(nums[i] < nums[i + 1]) {c++;} 
            else {c = 1;}
            inc[i] = c;
        }
        int l=1; int h=n/2;
        while(l<=h){
            int m= l+(h-l)/2;
            if( solve(m,nums,inc)){ans=m; l=m+1;}
            else{h=m-1;}
        }
        return ans;
    }
};