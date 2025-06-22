# User function Template for python3

class Solution:
    def longestSubarray(self, arr, k):  
        n=len(arr)
        s=0
        l=0
        sum_arr ={}
        
        for i in range(n):
            s+=arr[i]
            
            if s==k:
                l=max(l,i+1)
            
            rem = s-k
            if rem in sum_arr:
                length = i-sum_arr[rem]
                l=max(l,length)
            
            if s not in sum_arr:
                sum_arr[s]=i
        return l
