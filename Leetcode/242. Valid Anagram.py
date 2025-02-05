class Solution(object):
    def isAnagram(self, s, t):
        """
        Time Complexity: O(NlogN + MlogM)
        Space Complexity: O(N + M)
        :type s: str
        :type t: str
        :rtype: bool
        """
        news = "".join(sorted(s))
        newt = "".join(sorted(t))
        return news == newt