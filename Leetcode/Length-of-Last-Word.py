class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        array = s.split()
        return len(array[-1])