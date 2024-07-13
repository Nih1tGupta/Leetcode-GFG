//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int lb(vector<int>&m,int n,int x){
        int l=0;int h=n-1;int ans=n;
        while(l<=h){
            int mid=(l+h)/2;
            if(m[mid]>=x){ans=mid;h=mid-1;}
            else{l=mid+1;}
        }
        return ans;
    
    }
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            int maxi=0;
            int idx=0;
            for(int i=0;i<N;i++){
                int cnt=M-lb(Mat[i],M,1);
                if(cnt>maxi){maxi=cnt;idx=i;}
            }
            return idx;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends