class Solution(object):
    def threeConsecutiveOdds(self, arr):
        count=0
        for i in arr:
            if not i%2==0:
                count +=1
                if count>2:
                    return True
            else:
                count = 0
        
        return False