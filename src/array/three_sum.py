from typing import List

def threeSum(nums: List[int]) -> List[List[int]]:
    res = []
    nums.sort()

    for i in range(len(nums)-2):
        # don't want to reuse the same value as before
        if i > 0 and nums[i] == nums[i-1]:
            continue
        # there's some other stuff going on here
        l, r = i+1, len(nums)-1
        while l < r:
            s = nums[i] + nums[l] + nums[r]
            if s < 0:
                l += 1
            elif s > 0:
                r -= 1
            else:
                res.append([nums[i], nums[l], nums[l]])
                # there's an additional thing we need to do here
                # update your pointers
                l += 1
                while nums[l] == nums[l-1] and l < r: l += 1
    return res


print(threeSum([1, -1, 0, 1, 2, 3, -3, 2, -2]))
