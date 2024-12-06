class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        filteredStr = ''.join(x.lower() for x in s if x.isalnum())
        firstPointer = 0
        LastPointer = len(filteredStr) - 1

        while(LastPointer > firstPointer):
            if filteredStr[firstPointer] != filteredStr[LastPointer]:
                return False
            LastPointer -=1
            firstPointer +=1
        return True 
