import re
class Solution:
    def isPalindrome(self, s: str) -> bool:
        """
        Time Complexity: O(n)
        Space Complexity: O(n)
        """

        Alphanumeric= re.sub(r'[^a-zA-Z0-9]','',s).lower() # only Alphanumeric with redex

        left = 0 
        right = len(Alphanumeric)-1
      
        while left <= right:
            if Alphanumeric[left] != Alphanumeric[right]:
                return False
            else:
                left += 1
                right -= 1
        return True