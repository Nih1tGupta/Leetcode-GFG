//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        unordered_map<int, int>mp;int n=arr.size();
	    int count = 0;
        for(int i = 0 ; i < n ; i++)mp[arr[i]]++;
        if(k == 0){
            for(auto i : mp)
                if(i.second > 1)
                    count += (i.second * (i.second - 1)) / 2;
        }else{
            for(auto i : mp)
                if(mp.find(i.first - k) != mp.end())
                    count += i.second * mp[i.first - k];
        }
        return count;
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
        int k = stoi(ks);
        Solution ob;
        auto ans = ob.countPairsWithDiffK(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends