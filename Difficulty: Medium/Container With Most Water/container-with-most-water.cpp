class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size(); int maxi=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int h=min(arr[i],arr[j]); int w=j-i;
        //         maxi=max(maxi, h*w);
        //     }
        // }
        // return maxi;
        int i=0;int j=n-1;
        while(i<j){
            int h=min(arr[i],arr[j]); int w=j-i;
            maxi=max(maxi,w*h);
            if(arr[j]>arr[i]){i++;}
            else{j--;}
        }
        return maxi;
    }
};