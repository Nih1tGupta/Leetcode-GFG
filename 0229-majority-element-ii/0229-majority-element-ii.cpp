// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//          vector<int>ans;int count=0;
//         int n=nums.size();
       
//         for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n-1;j++){
//             if(nums[i]==nums[j]){
//    count++;
//         }
       
//         }
//                    if(count >n/3){
//                 ans.push_back(nums[i]);
//                         }
              
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> Map;
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            Map[nums[i]]++;
        }
        for(auto i: Map){
            if(i.second>n/3) ans.push_back(i.first);
        }
        return ans;
    }
};