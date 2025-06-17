class Solution(object):
    def moveZeroes(self, nums):
        dup = []
        count = 0
        for i in nums:
            if i!=0:
                dup.append(i)
            else:
                count=count+1
        
        while count:
            dup.append(0)
            count-=1
        for i in range(len(nums)):
            nums[i]=dup[i]
