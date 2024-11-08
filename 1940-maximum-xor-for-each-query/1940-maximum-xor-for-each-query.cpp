class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int x) {
        int n=nums.size();
        vector<int>v(n);int xorr=0;
        for(auto it:nums){xorr^=it;}
        int mask=(1<<x)-1;
        for(int i=0;i<n;i++){
            // xor ko flip karo
            int k=xorr^mask;
            v[i]=k;
            xorr^=nums[n-i-1];
        }
        return v;
    }
};