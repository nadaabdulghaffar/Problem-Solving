from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        Hashmap = {}

        for index, num in  enumerate(nums):
            Hashmap[num] = index

        for index, num in enumerate(nums):
            diff = target - num
            if diff in Hashmap and Hashmap[diff] != index:
                return [index, Hashmap[diff]] 
