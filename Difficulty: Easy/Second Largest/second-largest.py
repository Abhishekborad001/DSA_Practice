class Solution:
    def getSecondLargest(self, arr):
        largest = arr[0]
        second_largest = -1
        
        for i in range (len(arr)):
            if arr[i]>largest:
                second_largest = largest
                largest = arr[i]
            if arr[i] < largest and arr[i]> second_largest:
                second_largest = arr[i]
        
        if largest != second_largest and second_largest!=-1:
            return second_largest
        else:
            return -1
    