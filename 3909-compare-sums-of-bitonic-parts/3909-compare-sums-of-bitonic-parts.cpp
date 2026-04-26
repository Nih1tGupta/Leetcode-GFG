class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n =nums.size();
        int idx =0;
        if(nums[0]>nums[1])idx = 0;
        if(nums[n-1]>nums[n-2])idx = n-1;
        for(int i=1;i<n-1;i++){
                if(nums[i]> nums[i-1] && nums[i] >nums[i+1])idx =i;
        }

        long long l =0;long long r =0;
        for(int i=0;i<=idx;i++){l+=nums[i];}
        for(int i=idx;i<n;i++){r+=nums[i];}

        if(l>r){return 0;}
        if(r>l){return 1;}
        return -1;
    }
};