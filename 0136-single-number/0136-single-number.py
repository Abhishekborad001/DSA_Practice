class Solution(object):
    def singleNumber(self, nums):
        dic = {}

        for i in nums:
            dic[i] = dic.get(i, 0) + 1
        for key,value in dic.items():
            if value ==1:
                return key