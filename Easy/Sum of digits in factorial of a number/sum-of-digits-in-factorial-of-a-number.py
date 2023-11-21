
def findSumOfDigits(n):
    facto=1
    sum=0
    for i in range(1,n+1):
        facto*=i
    while facto!=0:
        sum+=facto%10
        facto=facto//10
    print(sum)


#{ 
 # Driver Code Starts

if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        n=int(input())
        findSumOfDigits(n)
# } Driver Code Ends