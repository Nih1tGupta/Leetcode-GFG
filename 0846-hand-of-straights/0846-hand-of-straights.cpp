class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int k) {
          if(nums.size()%k!=0){return false;}
        // sort(nums.begin(),nums.end());
        map<int,int>mp;
        for(auto &it:nums){mp[it]++;}
        while(!mp.empty()){
            int curr=mp.begin()->first;
            for(int i=0;i<k;i++){
                if(mp[curr+i]==0){return false;}
                mp[curr+i]--;
                if( mp[curr+i]<1){mp.erase(curr+i);}
            }
        }
        return true;
    }
};