class Solution {
  public:
    int countTriangles(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();int c=0;
        for(int i=n-1;i>=0;i--){
            int s=0;int e=i-1;
            while(s<e){
                if(arr[s]+arr[e]>arr[i]){c+=(e-s);e--;}
                else{s++;}
            }
        }
        return c;
    }
};
