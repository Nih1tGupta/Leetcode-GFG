//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    
    int mostBooked(int n, vector<vector<int>> &meetings) {
        // code here
        sort(meetings.begin(),meetings.end());
        int m=meetings.size();
        priority_queue<int,vector<int>,greater<int>>free;
        // / keep track of smallest free room avalibale
        // to know which roome become empty  by endtime
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>bs;
        
        vector<int>freq(n,0);
        for(int i=0;i<n;i++){free.push(i);}
        for(auto it:meetings){
            int st=it[0]; int ed=it[1];
            // un sab room ko free karod jinka end time <st of new meet
            while(!bs.empty() && bs.top().first<=st){
                free.push(bs.top().second);
                bs.pop();
            }
                        // agar free rooms hai -tho smallest wale assign kardo
            if(!free.empty()){
                int room=free.top();
                free.pop();
                freq[room]++;
                bs.push({ed,room});
            }
            // delay karna padega
            // lein lowest enfdtime wale pe hi delanege eeting ko
            else{
                int time=bs.top().first; // lowest endtime
                int room_idx=bs.top().second;
                int wait_more=time-st;
                bs.pop();
                bs.push({ed+wait_more,room_idx});
                freq[room_idx]++;
            }
            
        }
        int maxi=0;
            for(int i=1;i<n;i++){
                if(freq[i]>freq[maxi]){maxi=i;}
            }
        return maxi;
    }
};


//{ Driver Code Starts.

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> m;
        vector<vector<int>> meetings(m, vector<int>(2));
        for (int i = 0; i < m; i++) {
            cin >> meetings[i][0] >> meetings[i][1];
        }
        Solution ob;
        cout << ob.mostBooked(n, meetings) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends