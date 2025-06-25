class Solution(object):
    def maxSubArray(self, nums):
        #kadane's Algorithm
        maxi = float('-inf')
        s=0

        for num in nums:
            s+=num
            if s>maxi:
                maxi =s

            if s<0 :
                s=0
        return maxi
                