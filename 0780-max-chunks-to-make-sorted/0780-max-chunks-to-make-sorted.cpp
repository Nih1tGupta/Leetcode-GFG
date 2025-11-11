class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int cs=0;int ct=0; int org=0;
        for(int i=0;i<arr.size();i++){
            cs+=arr[i]; org+=i;
            if(cs==org)ct++;
        }
        return ct;
    }
};