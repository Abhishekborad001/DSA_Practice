#User function Template for python3

class Solution:
    def rotate(self, arr):
        num = arr[-1]
        for i in range(len(arr)-2,-1,-1):
            arr[i+1]=arr[i]
        
        arr[0]=num
        
        return arr
