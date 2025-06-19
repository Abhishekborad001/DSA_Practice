class Solution(object):
    def singleNumber(self, nums):
        x = 0
        for i in nums:
            x=x^i
        return x