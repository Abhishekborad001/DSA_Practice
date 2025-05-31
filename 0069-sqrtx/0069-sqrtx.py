class Solution(object):
    def mySqrt(self, x):
        if x==1 or x==0:
            return x
        low = 0
        high = x//2
        while low<=high:
            mid = low+(high-low)//2
    
            if mid*mid == x:
                return mid
            elif mid*mid < x:
                low = mid+1
            else:
                high=mid-1
        return high