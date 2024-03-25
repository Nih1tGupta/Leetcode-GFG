class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            int num= abs(nums[i]);
            int idx= num-1;
            if(nums[idx]<0){v.push_back(num);}
            else{
                nums[idx] *= -1;
            }
        }
        return v;
    }
};