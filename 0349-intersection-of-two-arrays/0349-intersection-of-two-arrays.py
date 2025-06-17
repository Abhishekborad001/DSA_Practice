class Solution(object):
    def intersection(self, nums1, nums2):
        n1 = len(nums1)
        n2 = len(nums2)
        res = set()

        if n1 >n2 : 
            for i in nums2:
                if i in nums1:
                    res.add(i)
        else:
            for j in nums1:
                if j in nums2:
                    res.add(j)
        return list(res)