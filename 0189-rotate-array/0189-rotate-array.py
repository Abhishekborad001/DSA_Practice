class Solution(object):
    def rotate(self, nums, k):
        n=len(nums)
        if n ==0:
            return nums
            
         
        k=k%len(nums)

        arr=[]
        for i in range(k,0,-1):
            arr.append(nums[n-i])
        for i in range(n-k-1,-1,-1):
            nums[i+k]=nums[i]
        for i in range(len(arr)):
            nums[i]=arr[i]
        return nums
        