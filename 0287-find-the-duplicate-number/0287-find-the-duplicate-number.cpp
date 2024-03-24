class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=1;int h=nums.size()-1;int ans=0;
        while(l<=h){
            int mid= l+ (h-l)/2;
            int c=0;
            for(int i=0;i<nums.size();i++){
            if(nums[i]<=mid){c++;}
        }
            if(c<=mid){l=mid+1;}
            else{ans=mid;h=mid-1;}
            
        }
        return ans;
    }
};