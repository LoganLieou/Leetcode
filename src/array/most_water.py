from typing import List

# O(n)
def maxArea(heights: List[int]) -> int:
    mArea = 0
    lo, hi = 0, len(heights) - 1
    while (lo < hi):
        curArea = min(heights[lo], heights[hi]) * (hi - lo)
        mArea = max(mArea, curArea)
        if (heights[lo] < heights[hi]):
            lo += 1
        else:
            hi -= 1

    return mArea

print(maxArea([1,8,6,2,5,4,8,3,7]))
