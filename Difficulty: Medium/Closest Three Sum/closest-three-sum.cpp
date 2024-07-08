//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int diff=INT_MAX;
        // -7 1 1 3 8 9
        int i=0;int n=arr.size();int res=0;
        for(int i=0;i<n-2;i++){
             int l=i+1;int h=n-1;
             while(l<h){
                 int sum=arr[l]+arr[h]+arr[i];
                 if(sum==target){return target;}
                 else if( abs(sum-target)<diff){diff= abs(target-sum);res=sum;}
                 else if( abs(sum-target)==diff){res= max(res,sum);}
                 if(sum<target){l++;}
                 else{h--;}
             }
        }
            
       return res; 
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends