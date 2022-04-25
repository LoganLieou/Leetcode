def maxArea(heights):
    curArea = 0
    l, r = 0, len(heights) - 1
    while l < r:
        curArea = max(curArea, min(heights[l], heights[r]) * (r-l))
        if heights[l] < heights[r]:
            l += 1
        else:
            r -= 1
    return curArea

# test case
print(maxArea([1,8,6,2,5,4,8,3,7])) # 49
print(maxArea([1,1])) # 1
