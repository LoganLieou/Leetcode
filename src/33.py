## search rotated sorted
from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        """
        searching rotated sorted array
        """

        lo, hi = 0, len(nums) - 1
        while (lo <= hi):
            mid = (lo + (hi - lo)) // 2
            # there's probably an edge case here?
            if (nums[hi] < target):
                # search right
                lo = mid + 1
            elif (nums[mid] == target):
                # return mid index
                return mid
            else:
                # search left
                hi = mid - 1
        return -1

if __name__ == "__main__":
    s = Solution()
    print(s.search([3, 4, 1, 2], 3))
