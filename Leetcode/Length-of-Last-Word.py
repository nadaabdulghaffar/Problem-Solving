class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        array = s.split(' ')

        while array[-1] == '':
            array.pop(-1)

        return len(array[-1])