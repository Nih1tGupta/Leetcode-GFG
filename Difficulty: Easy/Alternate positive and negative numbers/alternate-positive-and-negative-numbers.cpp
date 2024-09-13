//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>neg;
        vector<int>pos;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                neg.push_back(arr[i]);
            }else{
                pos.push_back(arr[i]);
            }
        }
        vector<int>ans;
        int i=0;int j=0;int k=0;
        
        while(k<n){
            
            if(i!=pos.size()){
               arr[k] = pos[i];
                k++;
                i++;
            }
            
            if(j!=neg.size()){
                arr[k]=neg[j];
                k++;
                j++;
            }
           
        }return;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends