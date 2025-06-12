class Solution(object):
    def nextGreatestLetter(self, letters, target):
        l=0
        r=len(letters)-1
        
        while l<=r:
            mid = l + (r-l)//2

            if letters[mid]>target:
                r=mid-1
            else:
                l = mid+1

        if l<len(letters):
            return letters[l]
        else:
            return letters[0]        
