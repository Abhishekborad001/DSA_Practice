class Solution(object):
    def removeDuplicates(self, nums):
        my_set = set()
        index=0
        for i in nums:
            if i not in my_set:
                my_set.add(i)
                nums[index]=i
                index +=1
               
        return len(my_set)