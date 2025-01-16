class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
         int res=0;int n=nums1.size(); int m=nums2.size();
        // for(int i=0;i<nums1.size();i++){
        //     for(int j=0;j<nums2.size();j++){
        //         res^=nums1[i]^nums2[j];
        //     }
        // }
// a XOR b = b XOR a
// a XOR a = 0
// a XOR 0 = a
        // return res;
        // num1 *m and num2*n
    unordered_map<int,long>mp;
    for(auto &it:nums1){mp[it]+=m;}
     for(auto &it:nums2){mp[it]+=n;}
     for(auto it:mp){
        if(it.second%2==1)res^=it.first;
     }
    return res;
    }
};