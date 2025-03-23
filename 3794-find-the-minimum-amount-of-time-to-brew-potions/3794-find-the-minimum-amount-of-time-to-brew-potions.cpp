class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n=skill.size();
        int m=mana.size();
        vector<long long>v(n,0);
        for(int j=0;j<m;j++){
            long long endtime=0;
            for(int i=0;i<n;i++){
                long long start=max(endtime,v[i]);
                endtime= start+ (skill[i]*mana[j]);
                v[i]=endtime ;
                // done[i] is  [ w(i),P(j-1)]
            }
        for(int i=n-1;i>=1;i--){
            v[i-1]=v[i] - (skill[i]*mana[j]);
        }
        }
        return v[n-1];
    }
};