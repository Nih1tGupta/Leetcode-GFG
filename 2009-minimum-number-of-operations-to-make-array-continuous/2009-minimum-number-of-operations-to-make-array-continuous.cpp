class Solution {
public:
    int minOperations(vector<int>& nums) {
      int n=nums.size();int minii=INT_MAX;
        // sort(nums.begin(),nums.end());
        set<int>s(begin(nums),end (nums));
        vector<int>v(begin(s),end(s));
        for(int i=0;i<v.size();i++){
            int minim=v[i];
            int range_last= minim+n-1;
            // upper_bound (ForwardIterator first, ForwardIterator last, const T& val);
            int max =  upper_bound(begin(v),end(v),range_last) - begin(v);
            int in=max-i;
           int out=n-in;
             minii= min(minii,out);
        }
       
        return minii;
    }
};