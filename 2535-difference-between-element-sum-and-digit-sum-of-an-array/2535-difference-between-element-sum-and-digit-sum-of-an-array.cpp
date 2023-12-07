class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
         int ts=0,dgt=0;
        for(auto i:nums){
            ts+=i;
            while(i){
                dgt+=i%10;
                i/=10;
            }
        }
        return abs(ts-dgt);
    }
};