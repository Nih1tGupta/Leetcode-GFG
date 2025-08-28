class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        // N^2* O(LEN)  GENRATE ALL AND COMPUTE SUBARRAY WITH AT MSOT K ZEROS AND FIND MAXI
        // SLIDING WINDOW
        int i=0;int j=0; int n=arr.size();int maxi=0;
        unordered_map<int,int>mp;int cnt=0;
        while(j<n){
            if(arr[j]==0)cnt++;
            while(cnt>k ){
                if(arr[i]==0){cnt--;}
                i++;
            }
            int len= j-i+1;
            maxi=max(maxi,len);
            j++;
        }
        return maxi;
    }
};
