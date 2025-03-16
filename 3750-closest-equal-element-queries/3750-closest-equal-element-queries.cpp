class Solution {
public:
    int solve(vector<int>& indices, int queryIdx, int n) {
    int minDist = INT_MAX;
    
    // Sort indices if not already sorted
    // (typically not needed if we maintain sorted vectors in the map)
    // sort(indices.begin(), indices.end());
    
    // Binary search to find the position where queryIdx would be inserted
    int left = 0, right = indices.size() - 1;
    int insertPos = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (indices[mid] == queryIdx) {
            insertPos = mid;
            break;
        } else if (indices[mid] < queryIdx) {
            insertPos = mid + 1;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    // Check closest elements on both sides
    int size = indices.size();
    for (int i = -1; i <= 1; i++) {
        int pos = (insertPos + i + size) % size;
        
        if (pos >= 0 && pos < size && indices[pos] != queryIdx) {
            int directDist = abs(indices[pos] - queryIdx);
            int wrapDist = n - directDist;
            int currDist = min(directDist, wrapDist);
            minDist = min(minDist, currDist);
        }
    }
    
    // Find the two surrounding indices (one before and one after queryIdx)
    int left_idx = -1, right_idx = -1;
    
    // Find left index (predecessor)
    left = 0;
    right = indices.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (indices[mid] < queryIdx) {
            left_idx = mid;
            left = mid + 1;
        } else if (indices[mid] == queryIdx) {
            right = mid - 1;
        } else {
            right = mid - 1;
        }
    }
    
    // Find right index (successor)
    left = 0;
    right = indices.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (indices[mid] > queryIdx) {
            right_idx = mid;
            right = mid - 1;
        } else if (indices[mid] == queryIdx) {
            left = mid + 1;
        } else {
            left = mid + 1;
        }
    }
    
    // Check left index
    if (left_idx != -1 && indices[left_idx] != queryIdx) {
        int directDist = abs(indices[left_idx] - queryIdx);
        int wrapDist = n - directDist;
        minDist = min(minDist, min(directDist, wrapDist));
    }
    
    // Check right index
    if (right_idx != -1 && indices[right_idx] != queryIdx) {
        int directDist = abs(indices[right_idx] - queryIdx);
        int wrapDist = n - directDist;
        minDist = min(minDist, min(directDist, wrapDist));
    }
    
    // Handle the case where queryIdx is at an extreme of the array
    if (left_idx == -1 && right_idx != -1) {
        int directDist = abs(indices[indices.size()-1] - queryIdx);
        int wrapDist = n - directDist;
        minDist = min(minDist, min(directDist, wrapDist));
    }
    
    if (right_idx == -1 && left_idx != -1) {
        int directDist = abs(indices[0] - queryIdx);
        int wrapDist = n - directDist;
        minDist = min(minDist, min(directDist, wrapDist));
    }
    
    return minDist == INT_MAX ? -1 : minDist;
}
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        unordered_map<int,vector<int>>mp;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int q=queries.size();
        vector<int>v(q,-1);
        for(int i=0;i<q;i++){
            int idx=queries[i];
            int ele=nums[queries[i]];
            // map me dhundo
            if(mp[ele].size()>1){
                v[i]=solve(mp[ele],idx,n);
            }  
        }
        return v;
    }
};