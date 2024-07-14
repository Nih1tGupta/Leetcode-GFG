//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>nums){
	    // Code here.
	    int a=0;
	    for(int j=1;j<=nums.size()-1;j++){
	        int s=0;
	        for(int i=0;i<=j;i++){
	            if(nums[j]>nums[i])s++;
	        }
	        int l=0;
	        for(int i=j+1;i<nums.size();i++){
	            if(nums[i]>nums[j])l++;
	        }
	        a+=(s*l);
	    }
	    return a;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends