class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();int count=0;int maxii=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){count=count+1;}
            else 
            count=0;
            if(count>maxii){maxii=count;}
        }
        return maxii;
    }
};