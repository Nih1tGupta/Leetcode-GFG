//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  static bool cmp(pair<int,int>a,pair<int,int>b){
      return b.second > a.second;
  }
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
    vector<pair<int,int>>v;
    int n=start.size();
    for(int i=0;i<n;i++){ v.push_back({start[i],finish[i]});}
    sort(v.begin(),v.end(),cmp);
    int end=v[0].second;
    int ct=1;
    for(int i=1;i<n;i++){
        if(v[i].first>end){
            ct++;
            end=v[i].second;
        }
    }
    return ct;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> start;
        int num;
        while (ss >> num)
            start.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> finish;
        ss.str(input);
        while (ss >> num)
            finish.push_back(num);

        Solution obj;
        cout << obj.activitySelection(start, finish) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends