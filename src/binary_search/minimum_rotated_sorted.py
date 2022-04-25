def find_min(nums):
    """
    I should try and understand this problem
    """
    if nums == []:
        return None
    lo, hi = 0, len(nums)-1
    while lo <= hi:
        mid = (lo + hi) // 2
        if nums[lo] < nums[mid]:
            lo += 1
        else:
            hi -= 1
    return nums[lo]
