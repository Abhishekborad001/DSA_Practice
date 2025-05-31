class Solution(object):
    def isPerfectSquare(self, num):
        high = num//2
        low = 0
        if num==1:
            return True
        while low<=high:
            mid = low + (high-low)//2

            if mid*mid == num:
                return True
            elif mid*mid > num:
                high = mid-1
            else:
                low = mid+1
        return False