class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int c=count(nums.begin(),nums.end(),k);
        int ans=c;
        for(int i=1;i<=50;i++){
            if(i==k)continue;
            int maxi=0; int sum=0;
            for(auto it:nums){
                if(it==i)sum++;
                else if(it==k)sum--;
                if(sum<0)sum=0;
                maxi=max(maxi,sum);
            }
            ans=max(ans,maxi+c);
        }
        return ans;
    }
};