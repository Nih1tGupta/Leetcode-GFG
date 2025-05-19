class Solution {
public:
    vector<long long> findMaxSum(vector<int>& nums1, vector<int>& nums2, int k) {
        //         int n = nums1.size();
        // vector<long long>ans;
        // for(int i = 0; i<n; i++){           // TC: O(n)
        //     priority_queue<int>pq;
        //     for(int j= 0 ; j<n; j++){       // TC: O(n)
        //         if(nums1[i]>nums1[j]){
        //             pq.push(nums2[j]);      // TC: O(logn)
        //         }
        //     }
        //     long long temp = 0;
        //     int cnt = 0;
        //     while(cnt<k && !pq.empty()){    // TC: O(klogn)
        //         temp += pq.top();
        //         pq.pop();
        //         cnt++;
        //     }
        //     ans.push_back(temp);
        // }
        // return ans;
        // TC: O(n*(nlogn + klogn)) ~ O(n²logn)
    //     int n=nums1.size();
    //     vector<long long>v(n,0);
    //     vector<pair<int,int>>idx;
    //     for(int i=0;i<n;i++){
    //         idx.push_back({nums1[i],i});
    //     }
    //     sort(idx.begin(),idx.end());
    //     priority_queue<int,vector<int>,greater<int>>pq;
    //     unordered_map<int,long long>mp;
    //     long long sum=0;
    //     int j=0;
    //     for(int i=0;i<n;i++){
    //         int index=idx[i].second;
    //         while(j<i){
    //             int prev=idx[j].second;
    //             if(idx[j].first>=idx[i].first){break;}
    //             pq.push(nums2[prev]);
    //             sum+=nums2[prev];
    //             if(pq.size()>k){
    //                 sum-=pq.top();pq.pop();
    //                 }
    //                 j++;
    //             }
            
    //         mp[index]=sum;
    //     }
    // for(int i=0;i<n;i++){
    //     v[i]=mp[i];
    // }
    // return v;
        vector<vector<int>>v;
        for(int i=0;i<nums1.size();i++){
            v.push_back({nums1[i],i,nums2[i]});
        }
        sort(v.begin(),v.end());
        int n=nums1.size();
        vector<long long>res(n,0);
        priority_queue<int,vector<int>,greater<int>>pq;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(i>0 and v[i-1][0]==v[i][0]){
                long long ans=res[v[i-1][1]];
                res[v[i][1]]=ans;
            }
            else{res[v[i][1]]=sum;}

            pq.push(v[i][2]);
            sum+=v[i][2];
            if(pq.size()>k){
                sum-=pq.top();
                pq.pop();
            }
        }
    return res;
    }
};