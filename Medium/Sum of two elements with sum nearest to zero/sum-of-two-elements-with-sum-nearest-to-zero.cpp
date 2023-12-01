//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
           sort(arr,arr+n);
            int low=0;
            int high=n-1;
            int m=INT_MAX;
            while(low<high)
            {
                int sum=arr[low]+arr[high];
                if(sum==0)
                return 0;
                if(abs(sum)<abs(m) || (abs(sum) == abs(m) && sum > m))
                {
                    m=sum;
                }
                if(sum<0)
                low++;
                else
                high--;
            }
            return m;
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends