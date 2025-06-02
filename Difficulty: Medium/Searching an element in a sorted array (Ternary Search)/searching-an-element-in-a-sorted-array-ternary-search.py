#User function Template for python3

class Solution:
    ##Complete this function
    def ternarySearch(self,arr,N,K):
        i=0
        j=N-1
        
        while i<=j:
            mid1 = i+(j-i)//3
            mid2 = j-(j-i)//3
        
            if arr[mid1]==K:
                return 1
            elif arr[mid2]==K:
                return 1
            elif arr[mid1]>K:
                j=mid1-1 
            elif arr[mid2]<K:
                i=mid2+1
            else:
                i=mid1+1
                j=mid2-1
        return -1