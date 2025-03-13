#{ 
 # Driver Code Starts
#Initial Template for Python 3

from typing import List
import math


# } Driver Code Ends


#User function Template for python3

class Solution:
    def lcmAndGcd(self, a : int, b : int) -> List[int]:
        list_num = [0,1]
        min_num= min(a,b)
        max_num = max(a,b)
        
        for i in range(1,(min_num+1)):
            if a%i ==0 and b%i==0:
                list_num[1]=i
        
        list_num[0] = (a*b) // list_num[1]
        return list_num
            


#{ 
 # Driver Code Starts.


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        a = int(input())
        b = int(input())
        obj = Solution()
        res = obj.lcmAndGcd(a, b)
        print(f"{res[0]} {res[1]}")
        print("~")

# } Driver Code Ends