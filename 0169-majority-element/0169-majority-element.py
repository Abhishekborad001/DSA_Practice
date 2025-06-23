class Solution(object):
    def majorityElement(self, nums):
        #Moore’s Voting Algorithm
        n=len(nums)
        ele = nums[0]
        cnt = 0
        cnt1=0

        for num in nums:
            if num == ele:
                cnt+=1
            elif num != ele and cnt!=0 :
                cnt-=1
            else:
                ele = num
                cnt =1
        for num in nums:
            if num==ele:
                cnt1+=1
        if cnt1> n//2:
            return ele
        return -1

        




