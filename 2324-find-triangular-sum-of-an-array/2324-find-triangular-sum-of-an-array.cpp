class Solution {
public:
    int triangularSum(vector<int>& arr) {
        // int n=nums.size();
        // for(int i=0;i<nums.size()+i;i++){
        //     vector<int>temp;
        //     for(int j=1;j<nums.size();j++){
        //         temp.push_back((nums[j-1]+nums[j])%10);
        //     }
        //     nums=temp;
        // }
        // return nums[0];
        int n=arr.size();
        for(int i=1; i<=n-1; i++){
            for(int j=0; j<n-i; j++){
                arr[j] = (arr[j]+arr[j+1])%10;
            }
        }
        return arr[0];
    }
};