class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int ct=INT_MIN;
        unordered_map<int,int>mp;
        int i=0;int j=0;
        while(j<arr.size()){
            mp[arr[j]]++;
            while(mp.size()>2){
                mp[arr[i]]--;
                if(mp[arr[i]]==0){mp.erase(arr[i]);}
                i++;
            }
            if(mp.size()<=2){ct=max(ct,j-i+1);}
            j++;
        }
        return ct;
    }
};