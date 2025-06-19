class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        temp = 0
        cnt=0

        for i in nums:
            if i==1:
                temp +=1
            else:
                if temp>cnt:
                    cnt=temp
                temp=0
        if temp>cnt:
            cnt=temp
        return cnt
