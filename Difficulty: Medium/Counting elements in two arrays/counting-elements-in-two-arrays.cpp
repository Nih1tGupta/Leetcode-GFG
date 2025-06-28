class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        vector<int>v;
        // for(int i=0;i<a.size();i++){
        //     int ct=0;
        //     for(int j=0;j<b.size();j++){
        //         if(b[j]<=a[i]){ct++;}
        //     }
        //     v.push_back(ct);
        // }
        // return v;
        // sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        // 1 4 5 7 8 -> 0 1 1 3 4 5 48
        for(int i=0;i<a.size();i++){
            int ele=a[i];
            int ct=0;
            int lb= upper_bound(b.begin(),b.end(),a[i])-b.begin();
            ct+=lb;
            v.push_back(ct);
        }
        return v;
    }
};