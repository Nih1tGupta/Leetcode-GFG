class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        vector<int>v;
        for(auto &it:arr1){mp[it]++;}
        for(int i=0;i<arr2.size();i++){
            if( mp.find(arr2[i])!=mp.end() ){
                while(mp[arr2[i]]!=0){
                    v.push_back(arr2[i]);
                    mp[arr2[i]]--;
                }
            }
        }
            vector<int>vv;
            for(int i=0;i<arr1.size();i++){
                if(mp[arr1[i]]!=0){vv.push_back(arr1[i]);}
            }
            sort(vv.begin(),vv.end());
            for(int i=0;i<vv.size();i++){
            v.push_back(vv[i]);
            }
    
        
        return v;
    }
};