from typing import List

def maxProfit(prices: List[int]) -> int:
    minPrice = prices[0]; maxDifference = 0

    for i in range(1, len(prices)):
        minPrice = min(minPrice, prices[i])
        maxDifference = max(maxDifference, prices[i] - minPrice)

    return maxDifference

print(maxProfit([1, 2, 3, 4, 5])) # 4