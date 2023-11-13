//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long altProduct(long long a[], long long n);

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        long long a[n];
        for(int i =0;i<n;i++)
           cin >> a[i];
        
        cout << altProduct(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends




long long altProduct(long long a[], long long n)
{
    long sum = 0;
        sort(a,a+n);

        long low = 0, high = n-1;
        while(low < high) {
            sum += a[(int)low] * a[(int)high];
            high--;
            low++;
        }

        return sum;
}