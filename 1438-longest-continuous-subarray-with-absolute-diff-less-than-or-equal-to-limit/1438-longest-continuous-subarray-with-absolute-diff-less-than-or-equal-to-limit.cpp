class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int i=0;int n=nums.size();int maxi=0;
        multiset<int,greater<int>>m;
        
        for(int j=0;j<n;j++){
            m.insert(nums[j]);
            int l=*m.begin();
            int s=*m.rbegin();
            while( abs (l-s)>k){m.erase(m.find(nums[i]));i++; l=*m.begin();s=*m.rbegin();}
            maxi= max(maxi,j-i+1);
        }
         return maxi;   
        
    }
};