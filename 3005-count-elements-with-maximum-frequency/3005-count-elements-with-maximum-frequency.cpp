class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxi=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            maxi = max(maxi,m[nums[i]]);
        }
        int sum=0;
      for(auto it: m){
          if(it.second==maxi){
              sum+=it.second;
          }
      
        }      
        return sum;
    }
};