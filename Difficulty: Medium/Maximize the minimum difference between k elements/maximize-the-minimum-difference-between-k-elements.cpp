class Solution {
  public:
  bool canPlace(vector<int>& arr, int k, int d) {
    int count = 1; // first element is always taken
    int last = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] - last >= d) {
            count++;
            last = arr[i];
            if (count >= k) return true;
        }
    }
    return false;
}
    int maxMinDiff(vector<int>& arr, int k) {
        // code here
         sort(arr.begin(), arr.end());

    int ans = 0;
    int maxDiff = arr.back() - arr.front();

    // Brute force: test all possible distances
    // for (int d = 1; d <= maxDiff; d++) {
    //     if (canPlace(arr, k, d)) {
    //         ans = d; // store latest valid distance
    //     }
    // }
    int l=1;int h=maxDiff;
    while(l<=h){
        int m=(l+h)/2;
        if(canPlace(arr,k,m)){ans=m;l=m+1;}
        else{h=m-1;}
    }
    return ans;
        
    }
};
