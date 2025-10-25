class Solution:
    def maxArea(self, height: List[int]) -> int:
        left , right  = 0 , len(height) - 1
        maxAmount = 0

        while left < right:
            maxAmount = max(maxAmount,
            ((right - left) * min(height[right], height[left])))

            if height[left] <= height[right]:
                left += 1
            else:
                right -= 1
        return maxAmount