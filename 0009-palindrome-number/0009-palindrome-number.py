class Solution(object):
    def isPalindrome(self, x):
        r_x=0
        if x<0:
            return False
        x_copy = x
        
        while(x>0):
            num = x%10
            x = x//10
            r_x = (r_x * 10) + num
        
        if r_x == x_copy:
            return True
        else:
            return False

