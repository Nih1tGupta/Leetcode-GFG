//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        if(str.back()<='5') {str.back()='0';return str;}
        str.back()='0';
        bool carry=true;
        for(int i=str.size()-2;i>=0;i--){
            if(str[i]=='9'){str[i]='0';continue;}
            ++str[i];
            carry=false;break;
        }
        if(carry){return "1"+str;}
        return str;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends