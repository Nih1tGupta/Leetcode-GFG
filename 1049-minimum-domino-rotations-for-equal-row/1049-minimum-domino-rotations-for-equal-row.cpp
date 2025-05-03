class Solution {
public:
    int calc(vector<int>&A,vector<int>&B,int ans){
        for(int i=1;i<=6;i++){
            int ct=0; bool made=true;
            for(int j=0;j<A.size();j++){
                if(A[j]==i){continue;}
                else if(B[j]==i){ct++;made=true;}
                else{made=false;break;}
            }
            if(made){
                ans=min(ans,ct);
            }
        }
        return ans;
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int ans=INT_MAX;
        int a=calc(tops,bottoms,ans);
        int b=calc(bottoms,tops,ans);
        if(a==INT_MAX||b==INT_MAX)return -1;
        return min(a,b);
    }
};