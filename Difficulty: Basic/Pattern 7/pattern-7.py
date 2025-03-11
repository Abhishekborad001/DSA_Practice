#User function Template for python3

class Solution:
    def printTriangle(self, N):
        for i in range(N):
                print(" " * (N-i),end='')
                print('*' * (2*i+1),end='')
                print(" "* (N-i))


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ob.printTriangle(N)
        print("~")
# } Driver Code Ends