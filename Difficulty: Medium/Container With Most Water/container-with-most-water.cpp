//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int maxWater(vector<int> &arr) {
        int maxi=0;int n=arr.size();
        // for(int i=0;i<n;i++){
        //     int area=0;
        //     for(int j=i+1;i<n;j++){
        //         int b=j-i;int h=min(arr[i],arr[j]);
        //         area=b*h;
        //         maxi=max(maxi,area);
        //     }
        // }
        // return maxi;
        int l=0;int r=n-1;
        while(l<r){
            int a=(r-l)*min(arr[l],arr[r]);
            maxi=max(maxi,a);
            if(arr[l]<arr[r]){l++;}
            else{r--;}
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends