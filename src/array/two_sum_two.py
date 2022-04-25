from typing import List, Optional

# O(n) time O(1) space, technically better than the O(n) original solution bc L(n) space
def twoSum(nums: List[int], tar: int) -> Optional[List[int]]:
    # the assumption is that nums is sorted
    lo, hi = 0, len(nums) - 1
    while (lo < hi):
        tmp = nums[lo] + nums[hi]
        if tmp < tar:
            lo += 1
        elif tmp > tar:
            hi -= 1
        elif tmp == tar:
            return [lo, hi]
        else:
            return None

print(twoSum([0, 0, 1], 3))
