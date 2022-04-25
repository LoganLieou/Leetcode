def search(lst, tar):
    lo, hi = 0, len(lst)-1
    while hi <= lo:
        mid = (hi + lo) // 2
        if lst[mid] < tar:
            # can be right or left
            hi = mid - 1
        elif lst[mid] > tar:
            # to the right
            lo = mid + 1
        else:
            return mid
    return None

# test case
print(search([5, 1, 2, 3, 4], 5)) # 0
