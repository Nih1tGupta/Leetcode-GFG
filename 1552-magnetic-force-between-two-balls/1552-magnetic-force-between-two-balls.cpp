class Solution {
public:
    bool solve(vector<int>&p,int m,int mid){
        int pl=1;
        int pre=p[0];
        for(int i=1;i<p.size() and pl<m;i++ ){
            int cur=p[i];
            if(cur-pre>=mid){pl+=1;pre=cur;}
        }
        if(pl==m){return true;}
        return false;
    }
    int maxDistance(vector<int>& p, int m) {
        sort(p.begin(),p.end());int mini=1;
        int h=p[p.size()-1]-p[0];
        int l=1;
        while(l<=h){
            int mid= (l+h)/2;
            if(solve(p,m,mid)){mini=mid;l=mid+1;}
            else{h=mid-1;} 
        }
        return mini;
    }
};