class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& q) {
        int n=nums.size();
     
        vector<int>p(n,0);
        for(int i=1;i<n;i++){
            p[i]=p[i-1];
            if(nums[i-1]%2==nums[i]%2){p[i]++;}
        }
           vector<bool>ans(q.size(),true);
        if(n==1)return ans;
        for(int i=0;i<q.size();i++){
            int u=q[i][0]; int v=q[i][1];
            int c=p[v]-p[u];
            ans[i]=(c>=1)?false:true;
        }
        return ans;
    }
};