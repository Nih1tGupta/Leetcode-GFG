class Solution {
public:
    void solve(vector<int>&nums,vector<int>&sub,vector<vector<int>>&subset,int idx){
        if(idx==nums.size()){subset.push_back(sub);return ;}
        sub.push_back(nums[idx]);
        solve(nums,sub,subset,idx+1);
        sub.pop_back();
        solve(nums,sub,subset,idx+1);
    }
    int subsetXORSum(vector<int>& nums) {
        long sum=0;
         vector<vector<int>> subset;
        vector<int>sub;
        solve(nums,sub,subset,0);
        for(auto it:subset){
            int summ=0;
            for(int num:it){summ^=num;}
            sum+=summ;
        }
        return sum;
    }
};