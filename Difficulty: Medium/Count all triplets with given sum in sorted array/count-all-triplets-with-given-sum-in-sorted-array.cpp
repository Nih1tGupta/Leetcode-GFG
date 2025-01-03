//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        int c=0;int n=arr.size();
        for(int i=0;i<n-2;i++){
            int j=i+1;int k=n-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==target){
                    if(arr[j]==arr[k]){
                        int ttl=k-j+1;
                        c+=(ttl*(ttl-1))/2;break;
                    }
                    else{
                        int lc=1;
                        while(j+1<k and arr[j]==arr[j+1]){lc++;j++;}
                        int rc=1;
                        while(k-1>j and arr[k]==arr[k-1]){rc++;k--;}
                        c+=(lc*rc);
                    }
                    j++;k--;
                }
                else if(sum<target){j++;}
                else{k--;}
            }
        }
        return c;
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends