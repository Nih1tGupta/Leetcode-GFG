class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        bool allzero = true;
        int n = nums.size();
        int res = 0;
        for(int &x : nums){
            res^=x;
            if(x!=0){ allzero = false ;}
        }
        if(allzero){return 0;}
        return (res==0)?n-1:n;
    }
};