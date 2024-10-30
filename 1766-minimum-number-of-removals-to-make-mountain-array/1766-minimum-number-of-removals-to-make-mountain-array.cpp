class Solution {
public:

      
    int minimumMountainRemovals(vector<int>& nums){
    int n=nums.size();int mini=INT_MAX;
      vector<int> t(n, 1);
        for(int i = 0; i<n; i++) {
            for(int j = i-1; j>=0; j--) {
                if(nums[j] < nums[i]) {
                    t[i] = max(t[i], t[j]+1);
                }
            }
    }

           vector<int> tt(n, 1);
        for(int i = n-1; i>=0; i--) {
            for(int j = i+1; j<n; j++) {
                if(nums[j] < nums[i]) {
                    tt[i] = max(tt[i], tt[j]+1);
                }
            }
    }
       for(int i=0;i<n;i++){
        if(t[i]>1 and tt[i]>1){mini=min(mini,n-t[i]-tt[i]+1);}}
        return mini;
    }
};