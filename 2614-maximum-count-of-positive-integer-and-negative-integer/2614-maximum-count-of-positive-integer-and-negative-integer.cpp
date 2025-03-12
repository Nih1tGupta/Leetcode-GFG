class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n,p=0;
        for(auto it:nums){
            if(it<0){n++;}
            else if(it>0){p++;}
        }
        return max(n,p);
    }
};