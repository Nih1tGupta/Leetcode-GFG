class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int q=queries.size();
        int n=nums.size();
        // for(int j=0;j<q;j++){
        //     for(int i=queries[j][0];i<=queries[j][1];i++){
        //         nums[i]--;
        //         if(nums[i]<0){nums[i]=0;}
        //     }
        // }
        // int s=accumulate(nums.begin(),nums.end(),0LL);
        // return (s==0);
        vector<int>v(n,0);
        for(int i=0;i<q;i++){
            int st=queries[i][0]; int end=queries[i][1];
            v[st]+=1;
            if(end+1<n){v[end+1]-=1;}
        }
        vector<int>f(n,0);
        int cs=0;
        for(int i=0;i<n;i++){
            cs+=v[i];
            f[i]=cs;
            if(f[i]<nums[i])return 0;
        }
    return 1;
    }
};