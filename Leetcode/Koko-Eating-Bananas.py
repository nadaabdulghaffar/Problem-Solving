from typing import List
import math

class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        left, right = 1, max(piles)  # search range
        
        while left < right:
            mid = (left + right) // 2
            
            # Calculate total hours if Koko eats at speed = mid
            hours = 0
            for p in piles:
                hours += math.ceil(p / mid)
                
            if hours <= h:  
                # mid works, try slower
                right = mid
            else:
                # mid is too slow, need faster speed
                left = mid + 1
        
        return left
