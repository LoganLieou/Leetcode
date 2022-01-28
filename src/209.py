from typing import List

class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        l, total = 0, 0
        res = float('inf')
        for r in range(len(nums)):
            total += nums[r]
            while (total >= target):
                res = min(r - l + 1, res)
                total -= nums[l]
                l += 1
        return 0 if (res == float('inf')) else int(res)

if __name__ == "__main__":
    s = Solution()
    print(s.minSubArrayLen(3, [1, 2, 3, 3, 4, 1, 5, 2, 4, 1]))
