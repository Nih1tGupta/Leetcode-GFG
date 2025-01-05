class Solution {
public:
    int maxLength(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            long long gc=nums[i];long long lc=nums[i];long long p=1,maxlc=10000000000;
            for(int j=i;j<nums.size();j++){
                p=p*((long long)nums[j]);
                if(p>maxlc)break;
                gc=gcd(gc,(long long)nums[j]);
                 lc=lcm(lc,(long long)nums[j]);
                 if(p==gc*lc)c=max(c,j-i+1);
            }
        }
        return c;
    }
};