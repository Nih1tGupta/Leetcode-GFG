class Solution {
public:
    int findMiddleIndex(vector<int>& nums)  {
     int n=nums.size();
     int right=0,left=0;int pivotIndex=-1;
     for(int i=0;i<n;i++){right +=nums[i];}

      for(int i=0;i<n;i++){right -=nums[i];
            if(left==right){pivotIndex=i;
            break;}
            left+=nums[i];}
            return pivotIndex;
    }
};