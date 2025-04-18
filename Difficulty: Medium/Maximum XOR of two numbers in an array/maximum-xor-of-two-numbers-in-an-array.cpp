//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
   struct Trie { Trie* c[2] = {}; };
  public:
    int maxXor(vector<int> &a) {
        Trie* r = new Trie();
        for (int n : a) {
            Trie* p = r;
            for (int i = 31; i >= 0; i--) {
                int b = (n >> i) & 1;
                if (!p->c[b]) p->c[b] = new Trie();
                p = p->c[b];
            }
        }
        int m = 0;
        for (int n : a) {
            Trie* p = r;
            int x = 0;
            for (int i = 31; i >= 0; i--) {
                int b = (n >> i) & 1;
                if (p->c[1 - b]) {
                    x |= (1 << i);
                    p = p->c[1 - b];
                } else p = p->c[b];
            }
            m = max(m, x);
        }
        return m;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.maxXor(arr) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends