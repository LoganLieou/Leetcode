## search rotated sorted
from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        if not nums: return -1
        lo, hi = 0, len(nums) - 1
        while (lo <= hi):
            mid = (lo + hi) // 2
            if (nums[mid] == target):
                return mid
            if nums[lo] <= nums[mid]:
                if target >= nums[lo] and target <= nums[mid]:
                    hi = mid + 1
                else:
                    lo = mid + 1
            else:
                if target >= nums[mid] and target <= nums[hi]:
                    lo = mid + 1
                else:
                    hi = mid - 1
        return - 1

if __name__ == "__main__":
    s = Solution()
    print(s.search([3, 4, 1, 2], 3))
