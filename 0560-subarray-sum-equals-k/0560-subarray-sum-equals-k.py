class Solution(object):
    def subarraySum(self, nums, k):
        n = len(nums)
        pre_sum_map={0:1}
        count=0
        s=0

        for i in range(n):
            s+=nums[i]

            if s-k in pre_sum_map:
                count+=pre_sum_map[s-k]
            if s in pre_sum_map:
                pre_sum_map[s]+=1
            else:
                pre_sum_map[s]=1
        return count



        