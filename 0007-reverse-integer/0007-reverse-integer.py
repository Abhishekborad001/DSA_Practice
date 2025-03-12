class Solution(object):
    def reverse(self, x):
        r_number = 0
        positive = 1

        if x<0:
            x = x * (-1)
            positive = 0
        

        while(x>0):
            num = x%10
            x = x//10
            r_number = (r_number * 10) + num

        if(positive == 1):
           if r_number< (-2 **31) or r_number>(2**31 - 1):
                return 0
           else:
                return r_number
        else:
            if r_number< (-2 **31) or r_number>(2**31 - 1):
                return 0
            else:
                return r_number * (-1)