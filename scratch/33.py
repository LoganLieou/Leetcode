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
<<<<<<< HEAD
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
=======
        # why is this so much faster than the binary search solution
        return -1 if target not in nums else nums.index(target)

if __name__ == "__main__":
    s = Solution()
    print(s.search([4, 5, 1, 2, 3], 3))
>>>>>>> bdf4cdb1568bafebfecc71d1ba7178b1c35404ca
