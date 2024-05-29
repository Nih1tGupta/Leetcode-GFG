class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lsi=nums.size()-1;
      for(int i=nums.size()-2;i>=0;i--){
          if(i+nums[i]>=lsi){lsi=i;}
      }
//         reached
        return lsi==0;
    }
};