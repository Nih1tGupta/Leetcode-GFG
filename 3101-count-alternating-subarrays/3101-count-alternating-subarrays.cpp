class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
      long long c=0;long long  n=nums.size();
        long long j=0;
        for(long long  i=0;i<n;i++){
            int j=i;
            while(j+1< n and nums[j]!=nums[j+1]){j++;}
            long long  len=j-i+1;
            c+=(long long) (len)*(len+1)/2;
            i=j;
            
        }
        return c;
    }
};