class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagram = {}

        for i in strs:
            orderString = ''.join(sorted(i))
            if orderString in anagram:
                anagram[orderString].append(i)
            else:
                anagram[orderString] = [i]

        return list(anagram.values())