class Solution:
    def mySqrt(self, x: int) -> int:
        if x < 2:
            return x

        left , right = 0 , x // 2 #sqrt(x) cannot be larger than x//2 
        candidate =  0
        while left <= right:
            # same as ((left + righ) // 2) but just to avoid overflow 
            mid = left + ((right -left) // 2)
            if mid * mid > x:
                right = mid -1
                
            elif mid * mid < x:
                candidate =  mid
                left = mid + 1
            else:
                return mid
        return candidate 


