class Solution {
  public:

    void rearrange(vector<int> &arr, int x) {
        // code here
         stable_sort(arr.begin(),arr.end(),[x](int a,int b){
           return abs(a-x) < abs(b-x);
       });
    }
};