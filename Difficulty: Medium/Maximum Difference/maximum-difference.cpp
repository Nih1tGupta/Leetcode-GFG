//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    vector<int>leftsmall(vector<int>&arr){
           vector<int>v(arr.size());
        int mini=0;
        v[0]=0;
        for(int i=1;i<arr.size();i++){
            mini=min(mini,arr[i]);
            v[i]=mini;
        }
        return v;
    }
     vector<int>rightsmall(vector<int>&arr){
           vector<int>v(arr.size());
        int mini=0;
        v[arr.size()-1]=0;
        for(int i=arr.size()-2;i>=0;i--){
            mini=min(mini,arr[i]);
            v[i]=mini;
        }
        return v;
    }
    int findMaxDiff(vector<int> &arr) {
        // Your code here
       vector<int>left_small(arr.size(),0);
        vector<int>right_small(arr.size(),0);
        left_small[0]=0;
        int smalls=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]<arr[i]){
                left_small[i]=arr[i-1];
            }else{
                int j=i-1;
                while(j>=0 && left_small[j]>=arr[i]){
                    j--;
                }
                left_small[i]=left_small[j];
                
            }
        }
        right_small[arr.size()-1]=0;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]>arr[i+1]){
                right_small[i]=arr[i+1];
            }else{
                int j=i+1;
                while(j<arr.size() && right_small[j]>=arr[i]){
                    j++;
                }
                right_small[i]=right_small[j];
                
            }
        }
       
        
        int ans=0;
        for(int i=0;i<arr.size();i++){
            ans=max(ans,abs(left_small[i]-right_small[i]));
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends