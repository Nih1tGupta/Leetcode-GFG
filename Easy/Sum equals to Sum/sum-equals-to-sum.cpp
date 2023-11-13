//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int findPairs(long long a[], long long n)
   {
        map<int, int> mp;
        
        for(int i=0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(mp.find(a[i]+a[j]) != mp.end()){
                    return 1;
                }
                else{
                    mp[a[i]+a[j]]++;
                   }  
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
	long long t;
	
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long a[n];
	    for(long long i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }
	    Solution ob;
	    cout << ob.findPairs(a, n) << endl;   
	    }
	return 0;
}

// } Driver Code Ends