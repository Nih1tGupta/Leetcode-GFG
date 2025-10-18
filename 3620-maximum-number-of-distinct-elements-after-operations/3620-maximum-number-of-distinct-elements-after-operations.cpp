class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        //  BRUTE - N*K;
        // HAR EK ELEMENT KE LIYE -K TO +K, TAK JAO AUR SET ME DAALO]
        // BUT OPTIMAL IS USING COUNT AND PREV-
        // NO NEED TO STORE SET./MAP EXTRA SPACE
        int c=0;int prev=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int mini= nums[i]-k;
            if(prev<mini){c++;prev=mini;}  // prev equal bhi nhi aur greater bhinhi hona chahiye
            else if(prev<nums[i]+k){prev+=1;c++;}
        }
        return c;
    }
};