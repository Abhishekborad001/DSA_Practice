# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution(object):
    def firstBadVersion(self, n):
        low = 0
        high = n
        while low<=high:
            mid = low + (high-low)//2
            if isBadVersion(mid)==1 and isBadVersion(mid-1) ==0:
                return mid
            elif isBadVersion(mid)==1:
                high= mid-1
            else:
                low = mid+1