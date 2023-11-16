#User function Template for python3

class Solution:
    def roundToNearest (self, N) : 
        n = int(N)
        a=(n//10)*10
        b = a+10
        if abs(n-a)>abs(b-n):
            return b
        return a



#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    
    s = input()
    ob = Solution()
    res = ob.roundToNearest(s)
    print(res)


# } Driver Code Ends