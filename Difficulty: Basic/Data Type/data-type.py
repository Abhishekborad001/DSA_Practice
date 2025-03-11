#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends

#User function Template for python3
import struct
class Solution:
    def dataTypeSize(self, str):
        d_type = str.lower()[0]
        return struct.calcsize(d_type)
    

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        str = input()
        ob = Solution()
        res = ob.dataTypeSize(str)
        print(res)
        print("~")
# } Driver Code Ends