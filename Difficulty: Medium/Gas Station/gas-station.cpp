//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


/*You are required to complete this method*/
class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        // Your code here
        // int n = gas.size();

        // for(int i = 0; i<n; i++) {
            
        //     if(gas[i] < cost[i])
        //         continue;
            
        //     int j = (i+1)%n;
            
        //     int currGas = gas[i];
                
        //     currGas = currGas - cost[i] + gas[j];
            
        //     while(j != i) {
        //         if(currGas < cost[j])
        //             break;
                
        //         int costForMovingFromThisj = cost[j];
                
        //         //Let's move
        //         j = (j+1)%n;
                
        //         int gasEarnInNextStationj = gas[j];
                
        //         currGas = currGas - costForMovingFromThisj + gasEarnInNextStationj;

        //     }
            
        //     if(i == j)
        //         return i;
        // }
        
        
        // return -1; 
        int n=gas.size();
        int gs=accumulate(gas.begin(),gas.end(),0);
        int cs=accumulate(cost.begin(),cost.end(),0);
        if(cs>gs)return -1;
        int total=0;int idx=0;
        for(int i=0;i<n;i++){
            total+=(gas[i]-cost[i]);
            if(total<0){
                total=0;idx=i+1;
            }
        }
        return idx;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function */
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {

        vector<int> gas, cost;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1) {
            gas.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2) {
            cost.push_back(number2);
        }
        Solution ob;
        int ans = ob.startStation(gas, cost);

        cout << ans << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends