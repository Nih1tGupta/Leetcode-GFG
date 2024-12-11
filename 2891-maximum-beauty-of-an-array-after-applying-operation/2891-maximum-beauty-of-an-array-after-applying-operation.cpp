class Solution {
public:
    int f(vector<int>&nums,int y){
        int idx=0;
        int l=0; int r=nums.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(nums[m]<=y){idx=m;l=m+1;}
            else{r=m-1;}
        }
        return idx;
    }
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
       int maxi=0;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];int y=a+2*k;
            int idx=f(nums,y);
            maxi=max(maxi,idx-i+1);
        }
        return maxi;
    }
};