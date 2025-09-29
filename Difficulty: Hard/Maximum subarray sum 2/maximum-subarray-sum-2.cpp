class Solution {
  public:
    int maxSubarrSum(vector<int>& arr, int a, int b) {
        // code here
        int maxi=0; int maxsum=0;
        int i=0;int  j=0; int n=arr.size(); int sum=0;
        while(j<n){
            sum+=arr[j];
            if(sum> maxi && j-i+1 >=a && j-i+1<=b){maxi=sum;}
            if(sum<0)sum=0;
            j++;
        }
        return maxi;
    }
};