class Solution {
public:
int solve(vector<vector<int>>&val){
    vector<int>bl,tl,br,tr;
    bl=val[0]; tl=val[1]; br=val[2]; tr=val[3];
    if(bl[0]!=tl[0] || br[0]!=tr[0])return -1;
    if(bl[1]!=br[1] || tr[1]!=tl[1])return -1;
    return ( abs(bl[0]-br[0])* abs(tl[1]-bl[1]) );
}
bool solve1(vector<vector<int>>&p,vector<vector<int>>&vals){
        vector<int> bl, tl, br, tr;
        bl = vals[0], tl = vals[1];
        br = vals[2], tr = vals[3];
        for(vector<int> it: p){
            if(it == bl || it == tl || it == br || it == tr) continue;
            int x = it[0], y = it[1];
            if(x >= bl[0] && x <= br[0] && y >= bl[1] && y <= tl[1]){
                return true;
            }
        }
        return false;
}
    int maxRectangleArea(vector<vector<int>>& p) {
        int ans=-1;
        int n=p.size();
        if(n<4)return -1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){
                        vector<vector<int>>value={p[i],p[j],p[k],p[l]};
                        sort(value.begin(),value.end());
                        int area=solve(value);
                        if(area==-1)continue;
                        if(solve1(p,value)==true)continue;
                        ans=max(ans,area);
                    }
                }
            }
        }
        return ans;
    }
};