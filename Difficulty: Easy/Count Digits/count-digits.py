#User function Template for python3

class Solution:
    def evenlyDivides(self, n):
        n_copy = n
        count = 0
        while(n>0):
            
            num = n%10
            n = n//10
            if num != 0:
                if n_copy % num == 0:
                    count+=1
        return count


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())

        ob = Solution()
        print(ob.evenlyDivides(N))
        print("~")

# } Driver Code Ends