class Solution {
public:
    int bs(vector<vector<int>>&it,int x){
        int l=0;int h=it.size()-1;int maxi=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(it[mid][0]>x){h=mid-1;}
            else{maxi=it[mid][1];l=mid+1;}
        }
        return maxi;
    }
    vector<int> maximumBeauty(vector<vector<int>>& it, vector<int>& q) {
        // SORT BY  CUSTOM---BS
        sort(it.begin(),it.end());
        vector<int>v;
         for(int i=1;i<it.size();i++){it[i][1]=max(it[i-1][1],it[i][1]); }
        for(int i=0;i<q.size();i++){
        //     int maxi=0;
        // for(int j=0;j<it.size();j++){
        //         if(it[j][0]<=q[i]){maxi=max(maxi,it[j][1]);}
        // }
        int maxi=bs(it,q[i]); 
               v.push_back(maxi);

        }
        return v;
    }
};