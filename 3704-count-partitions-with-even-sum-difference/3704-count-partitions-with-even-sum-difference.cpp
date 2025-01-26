class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int s=0;int c=0;
        for(auto it:nums){s+=it;}
        int sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum+=nums[i];
            if( abs(sum- (s-sum))%2==0)c++;
        }
        return c;
    }
};