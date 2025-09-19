class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counter = Counter(nums) # create hashmap 
        buckets = [[] for _ in range(len(nums) + 1)] # create empty list for each index
       
        # # insert hashmap into buckets (bucket sort) freqency : [values]
        for value, freq in counter.items():
            buckets[freq].append(value)
        
        # return to k
        result = []
        for n in range(len(buckets) - 1, 0 , -1): # move backwards
            for i in buckets[n]:
                result.append(i)
                if len(result) == k:
                    return result
    

        # Time Complexity: O(n)
        # Space Complexity: O(n)