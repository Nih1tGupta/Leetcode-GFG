//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {
 size_t first = str.find('/');
        size_t second = str.find(',');
        size_t third = str.find('/', second);
        
        // Extract numerators and denominators
        int n1 = stoi(str.substr(0, first));
        int d1 = stoi(str.substr(first + 1, second - first - 1));
        int n2 = stoi(str.substr(second + 1, third - second - 1));
        int d2 = stoi(str.substr(third + 1));
        
        // Compare fractions by cross-multiplying , to avoid precison errors
        if (n1 * d2 == n2 * d1) {
            return "equal";
        } else if (n1 * d2 > n2 * d1) {
            return to_string(n1) + "/" + to_string(d1);
        } else {
            return to_string(n2) + "/" + to_string(d2);
        }
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends