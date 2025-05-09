class Solution {
public:
    bool solve(int x,vector<int>&p,int time){
        long long y=0;
        for(int i=0;i<p.size();i++){
            y+=ceil((double)p[i]/(double)x);
        }
        return y<=time;
    }
    int minEatingSpeed(vector<int>& p, int hr) {
        int l=1;int h=*max_element(p.begin(),p.end());
        int ans=h;
        while(l<=h){
            int mid=(l+h)/2;
            if(solve(mid,p,hr)==true){ans=mid;h=mid-1;} 
            else{l=mid+1;}
        }
        return l;
    }
};