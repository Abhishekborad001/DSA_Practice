class Solution(object):
    def moveZeroes(self, nums):
        i=0
        j=i+1

        for j in range(len(nums)):
            if nums[i]==0 and nums[j]!=0:
                nums[i],nums[j]=nums[j],nums[i]
                i+=1
                j+=1

            elif nums[i]!=0:
                i+=1
                j+=1
            else:
                while nums[j]==0 and j<len(nums)-1:
                    j+=1
                nums[i],nums[j]=nums[j],nums[i]
        return nums


            
