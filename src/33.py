from typing import List

# jump search?
# normal binary search
def binary_search(nums: List[int], target: int) -> int:
    lo, hi = 0, len(nums)
    while (lo <= hi):
        mid = (lo + hi) // 2
        if (nums[mid] == target): return mid
        if (nums[mid] < target): lo = mid + 1
        if (nums[mid] > target): hi = mid - 1
    return -1

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        # why is this so much faster than the binary search solution
        return -1 if target not in nums else nums.index(target)

if __name__ == "__main__":
    s = Solution()
    print(s.search([4, 5, 1, 2, 3], 3))
