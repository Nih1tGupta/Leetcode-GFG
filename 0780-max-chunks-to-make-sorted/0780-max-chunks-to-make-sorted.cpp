class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
       int chunk = 0;
        vector<int> max(arr.size());
        max[0] = arr[0];

        for(int i = 1; i < arr.size(); i++) {
            max[i] = std::max(max[i - 1], arr[i]);
        }

        for(int i = 0; i < arr.size(); i++) {
            if(max[i] == i) {
                chunk++;
            }
        }
        return chunk;
    }
};