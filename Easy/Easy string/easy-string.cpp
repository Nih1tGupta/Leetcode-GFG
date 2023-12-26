//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}


// } Driver Code Ends


string transform(string s){
    int n = s.length();
    string ans = "";
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (s[i] == s[i+1]) {
            i++;
            count++;
        }
        ans += to_string(count);
        ans += s[i];
    }
    return ans;
}