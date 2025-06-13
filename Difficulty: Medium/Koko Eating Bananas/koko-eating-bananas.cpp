class Solution {
  public:
    bool possible(int x,vector<int>&p,int time){
        long long y=0;
        for(int i=0;i<p.size();i++){
            y+=ceil((double)p[i]/(double)x);
        }
        return y<=time;
    }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int l=1;
        int r=*max_element(arr.begin(),arr.end());
        // for(int i=1;i<mini;i++){
        //     if(possible(i,arr,k)){mini=i;}
        // }
        int ans=r;
        while(l<=r){
            int mid=l-(l-r)/2;
            if(possible(mid,arr,k)){ans=mid;r=mid-1;}
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};