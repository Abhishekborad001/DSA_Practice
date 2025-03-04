class Solution(object):
    def isPalindrome(self, s):

        s1=""
        for i in s:
            if i.isalnum():
                s1=s1+i
        
        s1 = s1.lower()
        s2 = s1[::-1]

        if s1==s2:
            return True
        else:
            return False
        