class Solution {
public:
    int possible(vector<int>&nums,int x){
        int n=nums.size();
        int st=1;
        int cap=0;
        for(int i=0;i<n;i++){
            if(cap+nums[i]<=x){
                cap+=nums[i];
            }
            else{
                st++;
                cap=nums[i];
            }
        }
    return st;
    }
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end());
        int h=0;
        for(auto it:nums){h+=it;}
        while(l<=h){
            int m=(l+h)/2;
            if(possible(nums,m)<=k){h=m-1;}
            else{l=m+1;}
        }
    return l;
    }
};