//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
     bool help(vector<int>&stalls,int dis,int k){
         int c=1;int last=stalls[0];
         for(int i=1;i<stalls.size();i++){
             if(stalls[i]-last>=dis){c++;last=stalls[i];}
         }
         if(c>=k)return true;
         return false;
     }
    int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(),stalls.end());int n=stalls.size();
    int mini=0;int maxi=stalls[n-1]-stalls[0];int ans=0;
        // for(int i=1;i<=maxi-mini;i++){
        //     if(help(stalls,i,k)==true)continue;
        //     else{return i-1;}
        // }
        
        while(mini<=maxi){
            int mid=(mini+maxi)/2;
            if( help(stalls,mid,k)==true){ans=mid;mini=mid+1;}
            else{maxi=mid-1;}
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends