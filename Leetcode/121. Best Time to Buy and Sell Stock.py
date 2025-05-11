class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        Time Complexity: O(n)
        Space Complexity: O(1)
        """
        minValue = prices[0]
        profit = 0

        for i in range(1, len(prices)):
            if prices[i] < minValue:
                minValue = prices[i]
            else:
                profit = max(profit, prices[i] - minValue)
        return profit