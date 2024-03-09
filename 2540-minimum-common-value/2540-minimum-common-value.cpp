class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size();int b=nums2.size();
        int i=0;int j=0;int res=-1;
        while(i< a and j<b){
            if(nums1[i]<nums2[j]){i++;}
             else if(nums1[i]>nums2[j]){j++;}
            else{res=nums1[i];i++;j++;break;}
        }
        return res;
    }
};