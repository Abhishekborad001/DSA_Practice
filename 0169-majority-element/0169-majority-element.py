class Solution(object):
    def majorityElement(self, nums):
        n=len(nums)
        freq = {}
        for num in nums:
            if num in freq:
                freq[num]+=1
            else:
                freq[num]=1
        
        for key,value in freq.items():
            if value> (n//2):
                return key
        
