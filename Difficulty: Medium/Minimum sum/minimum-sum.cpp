//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string minSum(vector<int> &arr) {
        vector<int>v3;
        sort(arr.begin(),arr.end());
        int i=0;vector<int>v1;vector<int>v2;
        while(i<arr.size()){
            v1.push_back(arr[i++]);
            if(i<arr.size()){v2.push_back(arr[i++]);}
        }
        reverse(v1.begin(),v1.end()); reverse(v2.begin(),v2.end());
         i=0;int j=0;int carry=0;
        while(i<v1.size() and j<v2.size()){
            int digit=v1[i++]+v2[j++]+carry;
            carry=digit/10;digit=digit%10;
            v3.push_back(digit);
        }
        while(i<v1.size()){
            int digit=v1[i++]+carry;
            carry=digit/10;digit=digit%10;
            v3.push_back(digit);
        }
        while( j<v2.size()){
            int digit=v2[j++]+carry;
            carry=digit/10;digit=digit%10;
            v3.push_back(digit);
        }
         while(carry){
            int digit=carry;
            carry=digit/10;
            digit%=10;
            
            v3.push_back(digit);
        }
        reverse(v3.begin(),v3.end());
         i=0;
        while(i<v3.size() and v3[i]==0)i++;
        if(i==v3.size())return "0";
        string s="";
        while(i<v3.size()){
            s+=('0'+v3[i]);i++;
        }
        return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends