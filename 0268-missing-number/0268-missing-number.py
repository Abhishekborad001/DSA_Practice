class Solution(object):
    def missingNumber(self, nums):
        n=len(nums)
        exp_sum = n * (n+1)//2
        act_sum = sum(nums)
        return exp_sum - act_sum