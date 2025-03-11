#User function Template for python3

class Solution:
    def printTriangle(self, N):
        count=1
        for i in range(N):
            for j in range(i+1):
                print(count,end=" ")
                count+=1
            print("")


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input().strip())
        ob = Solution()
        ob.printTriangle(N)
        print("~")
# } Driver Code Ends