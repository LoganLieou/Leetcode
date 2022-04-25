def robbery(houses):
    rob1, rob2 = 0, 0
    for h in houses:
        temp = max(rob1 + h, rob2)
        rob1 = rob2
        rob2 = temp
    return rob2

print(robbery([1,3,2,1])) # 4
