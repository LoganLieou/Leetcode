from typing import List

# Coin Change
class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        rs = [amount + 1] * (amount+1)
        rs[0] = 0
        for i in range(1, amount+1):
            for c in coins:
                if i >= c:
                    rs[i] = min(rs[i], rs[i-c] + 1)

        return -1 if rs[amount] == amount + 1 else rs[amount]

    def BFSCoin(self, coins: List[int], amount: int) -> int:
        return -1

if __name__ == "__main__":
    s = Solution()
    print(s.coinChange([1, 2, 3], 3))
