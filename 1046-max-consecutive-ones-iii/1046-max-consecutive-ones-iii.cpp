class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // int maxi=0;int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int zc=0;
        //     for(int j=i;j<n;j++){
        //         if(nums[j]==0){zc++;}
        //         if(zc<=k){maxi=max(maxi,j-i+1);}
        //         else{break;}
        //     }
        // }
        // return maxi;
        
        // sliding window
        int i=0;int j=0;int n=nums.size();
        int zc=0;int maxi=0;
        while(j<n){
            if(nums[j]==0){zc++;}
            if(zc>k){
                if(nums[i]==0){zc--;}
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};