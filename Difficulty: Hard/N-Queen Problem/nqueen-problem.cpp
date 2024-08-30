//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<int>> ans;
     vector<int> solution;
public:
    // we will use the LCCM framework that is level choice check and move
   
    bool check(int row, int col) {
        for (int pr = 0; pr < row; pr++) {
            int pc = solution[pr] - 1;
            if (col == pc || abs(row - pr) == abs(col - pc)) {
                return false;
            }
        }
        return true;
    }
    
    void rec(int level, int size) {
        if (level == size) {
            ans.push_back(solution);
            return;
        }
        for (int col = 0; col < size; col++) {
            if (check(level, col)) {
                solution[level] = col + 1;
                rec(level + 1,size);
                solution[level] = -1;
            }
        }
    }
    
    vector<vector<int>> nQueen(int n) {
        
     solution.assign(n, -1);
        ans.clear();
        rec(0,n);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends