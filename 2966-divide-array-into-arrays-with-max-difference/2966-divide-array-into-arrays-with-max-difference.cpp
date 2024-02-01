class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%3!=0){return {};}
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        for(int i=0;i<n;i+=3){
            if(nums[i+2]-nums[i]<=k and i+2<n){
                v.push_back({nums[i],nums[i+1],nums[i+2]});
            }
            else{
                v.clear();
                break;
            }
        }
        return v;
        
    }
};