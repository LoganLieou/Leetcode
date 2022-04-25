from typing import List

class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        maxValue = amount + 1
        dp = [maxValue] * maxValue

        dp[0] = 0

        for i in range(1, amount + 1):
            for j in range(len(coins)):
                if (coins[j] <= i):
                    dp[i] = min(dp[i], dp[i - amount] + 1)
        return -1 if (dp[amount] > amount) else dp[amount]

if __name__ == "__main__":
    s = Solution()
    print(s.coinChange([1, 2, 5], 11))
