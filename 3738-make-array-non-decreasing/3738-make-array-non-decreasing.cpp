class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
    // vector<int> V;
    // for (int i = 0; i < nums.size(); ++i) {
    //     int current = nums[i];
    //     while (!V.empty() && V.back() > current) {
    //         current = max(current, V.back());
    //         V.pop_back();
    //     }
    //     V.push_back(current);
    // }
    // return V.size();
    int prev=-1;int ct=0;
    for(auto it:nums){
        if(it>=prev){ct++;prev=it;}
    }
    return ct;
    }
};