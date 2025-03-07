//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // int n=arr.size();
        // int maxi=0;
        // int r=0;int l=0;
        // unordered_map<int,int>mp;
        // while(r<n){
        //     int s=0;
        //     if(mp[arr[r]]<2){
        //         s+=arr[r];
        //         maxi=max(maxi,s);
        //     }
        //     else{
        //         while(mp[arr[r]]>2){
        //             mp.erase(arr[l]);l++;
        //         }
        //         s=0;
        //         mp[arr[r]]++;
        //     }
        //     r++;
        // }
        // return maxi;
        // n^3 brute force method -->n2 k loop ko hata do 
        int l=0;int r=0;
        int n=arr.size();
        int maxi=0;
        map<int,int>mp;
        while(r<n){
            mp[arr[r]]++;
            if(mp.size()>2){
                mp[arr[l]]--;
                if(mp[arr[l]]==0){mp.erase(arr[l]);}
                l++;
            }if(mp.size()<=2){maxi= max(maxi,r-l+1);}
            r++;
            
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ans = ob.totalElements(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends