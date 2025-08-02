class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        // special case
        // if pehle kabhi current se bhi choota mila toh 
        // ye oth pakka hai ki +1karke hi aay hoga- usko consider karo
        unordered_map<int,int>mp;
        int maxi=0;
        mp[0]=-1;int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=(arr[i]>k)?1:-1;
            if(sum>0)maxi=i+1;
            if(mp.find(sum-1)!=mp.end()){
                maxi=max(maxi, i-mp[sum-1]);
            }
            else{
                if(mp.find(sum)==mp.end()){mp[sum]=i;}
            }
        }
        return maxi;
    }
};