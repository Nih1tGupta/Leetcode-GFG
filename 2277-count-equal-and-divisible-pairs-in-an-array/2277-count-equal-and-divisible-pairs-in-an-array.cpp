class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j] and (i*j)%k==0 ){c++;}
            }
        }
        return c;
    }
};