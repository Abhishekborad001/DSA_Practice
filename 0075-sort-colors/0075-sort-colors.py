class Solution(object):
    def sortColors(self, nums):
        c_0 =0
        c_1 = 0
        c_2 = 0

        for num in nums:
            if num==0:
                c_0+=1
            elif num==1:
                c_1+=1
            else:
                c_2+=1
        
        for i in range(c_0):
            nums[i]=0
        for j in range(c_1):
            nums[c_0+j] = 1
        for k in range(c_2):
            nums[c_0+c_1+k]=2
        
        return nums