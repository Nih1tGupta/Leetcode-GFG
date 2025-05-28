class Solution {
public:
    int maxProduct(vector<int>& nums) {
    //     int n=nums.size();
    //     int maxi=INT_MIN;
    //     for(int i=0;i<n;i++){
    //         for(int j=i;j<n;j++){
    //             int pro=1;
    //             for(int k=i;k<=j;k++){
    //                 pro*=nums[k];
    //             }
    //         maxi=max(maxi,pro);
    //         }
    //     }
    // return maxi;

    //     int n=nums.size();
    //     int maxi=INT_MIN;
    //     for(int i=0;i<n;i++){
    //         int pro=1;
    //         for(int j=i;j<n;j++){
    //             pro*=nums[j];
    //             maxi=max(maxi,pro);
    //         }
    //     }
    // return maxi;

    // obs based- 
    // 1. if all are +ve-> multiply all
    // 2. if even no of -ve->multiply all
    // 3.. if odd no of -ve-> kisi ek -ve number ko hatao
    //   -ve toh khi bhi ho sakta hai-> think of either prefix/suffix
    // taking zero is also a problem-> toh zero ke around subarray ka maxi le lo
    // toh jab bhi zero dikhega-> 1 me convert kardo- menaing we are starting a new one
      int n=nums.size();
      int ans=-1e9;
    int pre=1; int suff=1;
    for(int i=0;i<n;i++){
        if(pre==0){pre=1;}
        if(suff==0){suff=1;}
        pre*=nums[i];
        suff*=nums[n-i-1];
        ans = max( ans , max(suff,pre));
    }
    return ans;
    }
};