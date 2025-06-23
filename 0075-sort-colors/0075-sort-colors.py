class Solution(object):
    def sortColors(self, nums):
        #Dutch National flag algorithm

        low=0
        mid=0
        high = len(nums)-1

        # o to low-1 --> all o's
        # low to mid-1 --> all 1's
        # mid to high-1 --> unsorted 0,1,2
        # high to n-1 --> all 2's 

        while mid<=high:

            if nums[mid]==0:
                nums[low],nums[mid]=nums[mid],nums[low]
                low+=1
                mid+=1
            elif nums[mid]==1:
                mid+=1
            else:
                nums[mid],nums[high]=nums[high],nums[mid]
                high-=1
            
        return nums