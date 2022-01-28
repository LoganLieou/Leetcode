## search rotated sorted
from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        lo, hi = 0, len(nums) - 1
        while (lo <= hi):
            mid = (lo + hi) // 2
            if (nums[mid] == target):
                return mid
            if (nums[mid] > nums[lo]):
                # left side
                if (target > nums[mid] or target < nums[lo]):
                    #search right
                    lo = mid + 1
                else:
                    # otherwise case
                    hi = mid - 1
            else:
                # right side
                if (target < nums[mid] or target > nums[hi]):
                    # search left side
                    hi = mid - 1
                else:
                    lo = mid + 1
        return -1


if __name__ == "__main__":
    s = Solution()
    print(s.search([9, 10, 11, 1, 2, 3, 4, 5], 3))
