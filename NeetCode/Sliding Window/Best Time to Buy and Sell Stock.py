class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        start = 0
        diff = 0

        for end in range(1, len(prices)):
            profit = prices[end] - prices[start]
            diff = max(profit, diff)
            if (prices[start] > prices[end]):
                start = end
        return diff