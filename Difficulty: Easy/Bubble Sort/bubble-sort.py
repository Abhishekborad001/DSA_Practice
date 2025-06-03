class Solution:
    #Function to sort the array using bubble sort algorithm.
    def bubbleSort(self,arr):
        count = len(arr)-1
        while count:
            
            for i in range(len(arr)-1):
                if arr[i]>arr[i+1]:
                    arr[i],arr[i+1]=arr[i+1],arr[i]
            count = count-1
        return arr