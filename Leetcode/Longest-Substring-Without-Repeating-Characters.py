class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        l = r = 0 
        longest = 0
        distElement = set()

        while r < len(s):
            while s[r] in distElement:
                distElement.remove(s[l])
                l += 1
            distElement.add(s[r])
            r += 1
            longest = max(longest,len(distElement))
        return longest
