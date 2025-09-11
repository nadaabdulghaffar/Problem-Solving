class Solution(object):
    def characterReplacement(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        count_char= {}
        res = 0
        maxF = 0
        l = 0
        for r in range(len(s)):
            count_char[s[r]] = 1 + count_char.get(s[r],0)
            maxF = max(maxF, count_char[s[r]])

            if (r - l + 1) - maxF > k:
                count_char[s[l]] -= 1
                l += 1
            res = max(r - l + 1, res)
        return res
