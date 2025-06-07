class Solution {
public:
    int solve(vector<int>&w, int x){
        int cnt_days=1;int load=0;
        for(int i=0;i<w.size();i++){
            if(load+w[i]>x){
                 load=w[i];
                cnt_days++;
            }
            else{
               load+=w[i];
            }
        }
    return cnt_days;
    }
    int shipWithinDays(vector<int>& w, int days) {
        int sum=0;
        for(auto it:w){sum+=it;}
        int mini=*max_element(w.begin(),w.end());
        int maxi=sum;
        int ans=maxi;
        while(mini<=maxi){
            int mid= (mini+maxi)/2;
            if(solve(w,mid)<=days){
                ans=mid;
                maxi=mid-1;
            }
            else{
                mini=mid+1;
            }
        }
    return ans;
    }
};