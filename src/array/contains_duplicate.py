def containsDuplicate(lst):
    lst.sort()
    for i in range(len(lst) - 1):
        if (lst[i] == lst[i + 1]):
            return True
    return False