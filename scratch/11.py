from typing import List

class Solution:
    def maxArea(self, height: List[int]) -> int:
        l, r = 0, len(height) - 1
        res = 0
        while (l < r):
            curArea = min(height[l], height[r]) * (r - l)
            res = max(curArea, res)
            if (height[l] < height[r]):
                # move shorter one
                l += 1
            else:
                # otherwise move the right one
                r -= 1
        return res


s = Solution()
print(s.maxArea([1,8,6,2,5,4,8,3,7]))

