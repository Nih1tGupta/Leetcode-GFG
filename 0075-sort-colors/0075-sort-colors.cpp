class Solution {
public:
    void sortColors(vector<int>& nums) {
         vector<int> ans;
        priority_queue<int, vector<int>, greater<int> > minHeap;
        for(int i = 0; i<nums.size() ; i++){
            minHeap.push(nums[i]);
        }

        while(!minHeap.empty()){
            ans.push_back(minHeap.top());
            minHeap.pop();
        }

        for(int i = 0; i<ans.size(); i++){
            nums[i] = ans[i];
        }
    }
};