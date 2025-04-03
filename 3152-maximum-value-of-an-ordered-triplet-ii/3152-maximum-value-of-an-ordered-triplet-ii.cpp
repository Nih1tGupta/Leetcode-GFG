class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        // think-> if j is fixed
        // then max from (0..j) and (j+1..n) 
        // 2  array leftmax and right max
        // long long ans=0;
        // int maxi=nums[0];int n=nums.size();
        // for(int j=1;j<n;j++){
        //     maxi=max(maxi,nums[j]);
        //     for(int k=j+1;k<n;k++){
        //         long long x=(long long)(maxi-nums[j])*nums[k];
        //         if(x>ans)ans=x;
        //     }
        // }
        // return ans;
        int n=nums.size();
        vector<int>l(n,0),r(n,0);
        l[0]=nums[0];
        for(int i=1;i<n;i++){l[i]=max(nums[i],l[i-1]);}
        r[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){r[i]=max(nums[i],r[i+1]);}
        // 12 6 1 2 7
        long long maxi=0;
        for(int i=1;i<n-1;i++){
            long long diff=l[i-1]-nums[i];
            if(diff>0){
                long long val=diff*r[i+1];
                maxi=max(maxi,val);
            }
        }
        return maxi;
    }
};