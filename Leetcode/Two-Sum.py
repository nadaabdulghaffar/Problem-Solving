class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashtable = {}
       
        for i in range(len(nums)):
            if target - nums[i] in hashtable:
               return[hashtable[target - nums[i]], i]
            else:
                hashtable[nums[i]] = i
