class Solution(object):
    def rearrangeArray(self, nums):
        arr=[0] * len(nums)
        even =0
        odd = 0
        for num in nums:
            if num>=0:
                arr[even]=num
                even +=2
            else:
                arr[odd+1]=num
                odd +=2
        
        for i in range(len(arr)):
            nums[i]=arr[i]
        return nums

