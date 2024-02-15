class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long per=0;
        long long edgesum=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<edgesum){
                per= edgesum+nums[i];
            }
            edgesum+=nums[i];
        }
        if(per==0){return -1;}
        return per;
    }
};