class Solution(object):
    def majorityElement(self, nums):
        #Moore’s Voting Algorithm
        ele = nums[0]
        cnt = 0

        for num in nums:
            if num == ele:
                cnt+=1
            elif num != ele and cnt!=0 :
                cnt-=1
            else:
                ele = num
                cnt +=1
        return ele




