class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxi=INT_MIN;
        int s1=0;
        for(int i=0;i<nums.size();i++){
            s1+=nums[i];
            if(s1<0){s1=0;}
            maxi=max(maxi,s1);
        }
        int maxii=INT_MIN;
        int s2=0;
        for(int i=0;i<nums.size();i++){
            s2+=nums[i];
            if(s2>0){s2=0;}
            maxi=max(maxi,abs(s2));
        }
        return max(maxi,maxii);
    }
};