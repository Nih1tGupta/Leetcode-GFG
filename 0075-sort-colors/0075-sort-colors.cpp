class Solution {
public:
    void sortColors(vector<int>& nums) {
        // 0000000 low..1......mid 01212101201 high .22222222
        // handle mid-high
        int l=0;int mid=0;int h=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[mid]==0){
                swap(nums[l],nums[mid]);
                mid++;l++;
            }
            else if(nums[mid]==1){mid++;}
            else{
                swap(nums[mid],nums[h]);
                h--;
            }
        }
      
    }
};