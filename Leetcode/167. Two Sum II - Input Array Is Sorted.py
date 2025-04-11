class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]

        Time Complexity: O(N)
        Space Complexity:O(N)
        """
        hashMap = {}

        for index, value in enumerate(numbers):
            val = (target - value)
            if val in hashMap:
                return [hashMap.get(val) + 1, index + 1]
            else:
                hashMap[value] = index
        