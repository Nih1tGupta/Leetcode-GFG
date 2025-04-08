class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        // unordered_map<int,int>mp;int d=0;
        // for(auto it:nums){mp[it]++;}
        // for(auto it:mp){
        //     if(it.second>1)d+=(it.second-1);
        // }
        // int c=0;
        // while(d>0){
        //     if(nums.size()>3){
        //         nums=vector<int>(nums.begin()+3,nums.end());
        //     }
        //     else{
        //         nums.clear();
        //     }
        //     mp.clear();
        //     for(auto it:nums){mp[it]++;}
        //     d=0;
        //     for(auto it:mp){ if(it.second>1)d+=(it.second-1);}
        //     c++;
        // }
        // return c;
        // If the repeated element x appears at indices i and j with i<j, then all elements before index i must be removed. This reduces the problem to finding the longest suffix of the array in which all elements are distinct. Since each time it is necessary to remove 3 elements, to remove all elements before index i,
        // [i+1/3]=[i/3]+1; 
        vector<bool>v(128);
        for(int i=nums.size()-1;i>=0;i--){
            if(v[nums[i]]){return i/3+1;}
            v[nums[i]]=1;
        }
        return 0;
    }
};