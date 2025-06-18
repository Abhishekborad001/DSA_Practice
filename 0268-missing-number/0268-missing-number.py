class Solution(object):
    def missingNumber(self, nums):
        st = set(nums)
        for i in range(len(nums)+1):
            if i not in st:
                return i