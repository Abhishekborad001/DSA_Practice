class Solution(object):
    def topKFrequent(self, nums, k):
        dict_f = {}

        for num in nums:
            if num in dict_f:
                dict_f[num]+=1
            else:
                dict_f[num]=1
        
        top_k = []

        top_k=[key for key, value in sorted(dict_f.items(),key = lambda item:item[1],reverse = True)[:k]]
        return top_k
