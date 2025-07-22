class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
         sort(arr.begin(),arr.end());//MAKE  ALL NEGATIVE NUBMERS 0
        int n=arr.size();
        int k=1;
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i]<=0)
            {
                arr[i] = 0;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k)
               k++;
           
        }
        return k;
    }
};