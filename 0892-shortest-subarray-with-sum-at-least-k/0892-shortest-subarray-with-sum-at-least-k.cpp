class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        // brute  prefix sum wala --> o(n^2)
        //  ll n=a.size(),len=LLONG_MAX;
        // len=(a[0]>=k) ? 1:len;
        // for( ll i=1;i<n;i++){
        //     a[i]+=a[i-1];
        //     if( a[i]>=k) len=min(len, i+1);
        // } 
        // // 2 1 3
        //  for( ll i=0;i<n;i++){
        //     for( ll j=i+1;j<n;j++){
        //         if( a[j]-a[i] >=k) len=min( len, j-i);
        //     }
        // }
        //  return (len!=INT_MAX) ? len:-1;

        // same question hai -minimum  siz subarray sum wala
        // but ime -ve numbers bhi aa gye hai
        // 84 -37 37  40 95- k=135
        // prefix sum nikal liyo
        //    84--->dip 47--->agaibn rise to 84== no value of first 84
        // usko completely igonre kar sakte hai- kyuki  vo humko bada subarray de sakta hai
        // /isliye igonre that
        int n=nums.size();
        vector<long long>v(n,0);
        deque<int>dq;
        int j=0;
        int ans=INT_MAX;
        while(j<n){
            if(j==0){v[j]=nums[j];}
            else{
                v[j]=v[j-1]+nums[j];
            }
            if(v[j]>=k){ans=min(ans,j+1);}
            while(!dq.empty() and v[j]-v[dq.front()]>=k){
                ans=min(ans,j-dq.front());
                dq.pop_front();
            }      // shrink
            // monotonic order me daalna hai
            while(!dq.empty() and v[j]<=v[dq.back()]){dq.pop_back();}
            dq.push_back(j);
            j++;
        }
    if(ans==INT_MAX)return -1;
    return ans;
    }
};