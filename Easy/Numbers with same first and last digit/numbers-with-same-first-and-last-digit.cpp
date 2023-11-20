//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int numbersInRange(int L, int R){
          int cnt = 0;
        for(int i=L;i<=R;++i){
            if(i < 10) cnt++;
            else{
                int last,first;
                int num = i;
                while(num!=0){
                    if(num == i) {last = num%10;}
                    first = num%10;
                    num /= 10;
                }
                if(first == last) cnt++;
            }
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout << ob.numbersInRange(L, R) << endl;
    }
    return 0; 
} 

// } Driver Code Ends