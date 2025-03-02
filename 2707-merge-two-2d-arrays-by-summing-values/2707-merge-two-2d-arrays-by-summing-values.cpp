class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>v;
        // map<int,int>mp;
        // for(auto it:nums1){
        //     mp[it[0]]=it[1];
        // }
        // for(auto it:nums2){
        //     mp[it[0]]+=it[1];
        // }
        // for(auto it:mp){
        //     v.push_back({it.first,it.second});
        // }
        // return v;
        int n1=nums1.size();  int n2=nums2.size();
        int ptr1=0;int ptr2=0;
        while(ptr1<n1 and ptr2< n2){
            if(nums1[ptr1][0]==nums2[ptr2][0]){
                v.push_back({nums1[ptr1][0],nums1[ptr1][1]+nums2[ptr2][1]});
                ptr1++;
                ptr2++;
            }
            else if(nums1[ptr1][0]<nums2[ptr2][0]){
                v.push_back(nums1[ptr1]);
                ptr1++;
            }
            else{
                v.push_back(nums2[ptr2]);
                ptr2++;
            }
        }
        while(ptr1<n1){
            v.push_back(nums1[ptr1]);
            ptr1++;
        }
         while(ptr2<n2){
            v.push_back(nums2[ptr2]);
            ptr2++;
        }
        return v;
    }
};