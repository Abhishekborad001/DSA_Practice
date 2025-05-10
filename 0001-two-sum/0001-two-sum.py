class Solution(object):
    def twoSum(self, nums, target):
        A=[]
        for i,num in enumerate(nums):
            A.append([num,i])
        A.sort()
        i,j = 0,len(nums)-1
        while i<j:
            cur = A[i][0]+A[j][0]

            if cur==target:
                return [A[i][1],A[j][1]]
            if cur<target:
                i+=1
            else:
                j-=1
        return []