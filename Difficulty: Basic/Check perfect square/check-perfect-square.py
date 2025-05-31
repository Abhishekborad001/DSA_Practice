#User function Template for python3
class Solution:
    def checkPerfectSquare (ob,N):
        # code here 
        high = N//2
        low = 0
        if N==1:
            return True
        while low<=high:
            mid = low + (high-low)//2

            if mid*mid == N:
                return 1
            elif mid*mid > N:
                high = mid-1
            else:
                low = mid+1
        return 0