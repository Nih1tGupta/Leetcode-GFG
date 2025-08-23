class Solution {
  public:
    int h(vector<int>&arr,int cap){
       int s=1;int has=0;
       for(int i=0;i<arr.size();i++){
           if(has+arr[i]<=cap){has+=arr[i];}
           else{s+=1;has=arr[i];}
       }
       return s;
   }
    int findPages(vector<int> &arr, int k) {
        if(k>arr.size())return -1;
        int s=0;for(auto it:arr){s+=it;}
        if(k==1){ return s;}
        int n=arr.size();
        int mini=*max_element(arr.begin(),arr.end());
        int maxi=s;
        while(mini<=maxi){
            int m=(mini+maxi)/2;
            if(h(arr,m) >k){mini=m+1;}
            else{maxi=m-1;}
        }
        return mini;
    }
};