class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        vector<vector<int>>v;
        // int n=inter.size();
        // sort(inter.begin(),inter.end());
        //   for(int i=0;i<n;i++){
        //     int st=inter[i][0]; int end=inter[i][1];
        //     if(!v.empty() and v.back()[1]>=end){continue;}
        //     for(int j=i+1;j<n;j++){
        //         if(end>=v[j][0]){end=max(end,inter[j][1]);}
        //         else{break;} 
        //     }
        //     v.push_back({st,end});
        //   }
        //   return v;

        sort(inter.begin(),inter.end());
        v.push_back(inter[0]);
        for(int i=1;i<inter.size();i++){
        
            if( inter[i][0]>v.back()[1]){v.push_back(inter[i]);}
            else{
                v.back()[1]= max(v.back()[1],inter[i][1]);
            }
        }
        return v;
    }
    
};