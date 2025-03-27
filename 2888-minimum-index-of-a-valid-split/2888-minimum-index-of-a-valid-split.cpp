class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        // SPLIT AT EVERY IDX
        // unordered_map<int,int>mpf;
        // unordered_map<int,int>mp1;
        int n=nums.size();
        // for(auto it:nums){mpf[it]++;}
        // for(int i=0;i<nums.size();i++){
        //       int consider=nums[i];
        //     //   split
        //     mp1[consider]++;
        //     mpf[consider]--;
        //     if( mp1[consider]>(i+1)/2 and mpf[consider]>(n-i-1)/2){return i;}
        // }
        // return -1;
        // O(N)+ O(N)*LOG(N) : O(N+N)
        // VOTING ALGO-OPTIMAL
        int ele=nums[0]; int ct=1;
        for(int i=0;i<nums.size();i++){
            ct+=(nums[i]==ele)?1:-1;
            if(ct==0){ele=nums[i];ct=1;}
        }
        int mj_ct=0;
        for(auto it:nums){mj_ct+=(it==ele)?1:0;}
        int new_c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){new_c++;}
            int rem=mj_ct-new_c;
            if(new_c >(i+1)/2 and rem>(n-i-1)/2){return i;}
        }
        return -1;
    }
};