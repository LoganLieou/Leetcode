def maxProfit(prices):
    res = 0
    buy = prices[0]
    for i in range(len(prices)):
        res = max(res, prices[i] - buy)
        buy = min(buy, prices[i])
    return res

print(maxProfit([7,1,5,3,6,4])) # 5
