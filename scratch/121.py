from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minValue = float('inf')
        maxProfit = 0
        for i in range(len(prices)):
            minValue = min(minValue, prices[i])
            maxProfit = max(prices[i] - minValue, maxProfit)
        return int(maxProfit)
