//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   int h(vector<int>&arr,int cap){
       int s=1;int has=0;
       for(int i=0;i<arr.size();i++){
           if(has+arr[i]<=cap){has+=arr[i];}
           else{s+=1;has=arr[i];}
       }
       return s;
   }
    int findPages(vector<int> &arr, int k) {
        if(k>arr.size())return -1;
        int s=0;for(auto it:arr){s+=it;}
        if(k==1){ return s;}
        int n=arr.size();
        int mini=*max_element(arr.begin(),arr.end());
        int maxi=s;
        while(mini<=maxi){
            int m=(mini+maxi)/2;
            if(h(arr,m) >k){mini=m+1;}
            else{maxi=m-1;}
        }
        return mini;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends