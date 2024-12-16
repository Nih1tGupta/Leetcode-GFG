//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
         int n=a.size();int m=b.size(); vector<int> arr3;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        // Pushing the minimum current element into 'arr3'.
        if (a[i] < b[j])
        {
            arr3.push_back(a[i]);
            i++;
        }
        else
        {
            arr3.push_back(b[j]);
            j++;
        }
    }
    // Pushing the remaining elements into 'arr3'.
    while (i < n)
    {
        arr3.push_back(a[i]);
        i++;
    }
    while (j < m)
    {
        arr3.push_back(b[j]);
        j++;
    }
    return arr3[k - 1];
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends