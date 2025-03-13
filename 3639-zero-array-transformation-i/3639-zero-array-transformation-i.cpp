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
        vector<int>prefix(n+1,0);
        for(auto it:queries){
            int l=it[0];
            int r=it[1];
            prefix[l]-=1;
            prefix[r+1]+=1;
        }
        for(int i=1;i<n;i++){
            prefix[i]+=prefix[i-1];
        }
        for(int i=0;i<n;i++){
            if(prefix[i]+nums[i] >0)return 0;
        }
        return 1;
    }
};