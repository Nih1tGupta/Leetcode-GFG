class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
        int n=nums.size();
        // while(k--){
        //     int idx=0;
        //     for(int i=0;i<nums.size();i++){
        //         if(nums[idx]>nums[i]){idx=i;}
        //     }
        //     nums[idx]*=m;
        // }
        // return nums;
         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    for (int i = 0; i < nums.size(); i++) {
        pq.push({nums[i], i}); 
    }
    pair<int, int> minEle; 
    while (k--) {
        minEle = pq.top();
        pq.pop();
        nums[minEle.second] *= m;
        pq.push({nums[minEle.second], minEle.second});
       
    }
    return nums;

    }
};