//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        int i=0;int j=arr.size()-1;
   int close= INT_MAX; vector<int>ans(2,-1);
   while(i<j){int sum=arr[i]+arr[j];
       if(abs(target-sum)<close){ close=abs(target-sum);
           ans[0]=arr[i];ans[1]=arr[j];
       }
       if(sum<target){i++;}
       else{j--;}
   }
    if(ans[0]!=-1)return ans;
    return{};
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends