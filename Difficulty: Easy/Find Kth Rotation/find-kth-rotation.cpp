// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int ans=INT_MAX;int idx=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<ans){ans=arr[i];idx=i;}
        }
        return idx;
    }
    
};
