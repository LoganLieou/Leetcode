from typing import List

# TODO think about the cases
def findMin(nums: List[int]) -> int:
    lo, hi = 0, len(nums) - 1
    res = nums[0]
    while (lo <= hi):
        if (nums[lo] < nums[hi]):
            res = min(res, nums[lo])
            break
        mid = (lo + hi) // 2
        res = min(res, nums[mid])
        if (nums[mid] >= nums[lo]):
            lo = mid + 1
        else:
            hi = mid - 1
    return res

print(findMin([8, 9, 1, 2, 3])) # 1