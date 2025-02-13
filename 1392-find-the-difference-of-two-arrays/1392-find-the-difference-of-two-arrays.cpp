class Solution {
public:
    vector<int>solve(vector<int>&a,vector<int>&b){
        unordered_set<int>onlyina;
        unordered_set<int>inb;
        for(auto it:b){
            inb.insert(it);
        }
        for(auto it:a){
            if(inb.find(it)==inb.end()){
                onlyina.insert(it);
            }
        }
        return vector<int>(onlyina.begin(),onlyina.end());
    }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        // brute-->
        // O(n^2)+o(n^2)+set operation
        // better
        // 2 pointer +sorting-->o(nlon)+o(mlogm)+set operation
        // best
        // o(n+m)  sc->set size etc
    return {solve(nums1,nums2), solve(nums2,nums1)};
    }
};