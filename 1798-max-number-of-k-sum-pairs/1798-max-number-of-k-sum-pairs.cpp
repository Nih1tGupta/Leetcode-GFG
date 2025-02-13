class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;int j=nums.size()-1;int c=0;
        while(i<j){
            int s=nums[i]+nums[j];
            if(s==k){c++;i++;j--;}
            else if(s>k){j--;}
            else{i++;}
        }
        return c;
    }
};