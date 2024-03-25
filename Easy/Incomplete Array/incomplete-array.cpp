//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int countElements(int N, int A[]) {
 if(N == 1)

            return 0;

        set<int>s;

        for(int i=0;i<N;i++)

            s.insert(A[i]);

        int maxi = *max_element(A,A+N);

        int mini = *min_element(A,A+N);

        // for(int i=)

        return maxi-mini-s.size()+1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];
        Solution ob;
        cout << ob.countElements(N, A) << "\n";
    }
}
// } Driver Code Ends