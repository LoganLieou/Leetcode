from typing import List

# interesting solution please explain
def solve(reltaions: List[List[int]]) -> List[int]:
    # get the set of pairs in relations
    relations = set((tuple(pair) for pair in relations))

    # create an empty set of mutal followers
    mutual = set()

    # for first and second elements in each relation
    for x, y in relations:
        # if the second and first element are in the relation
        if (y, x) in relations:
            # push these into the set
            mutual.add(x)
            mutual.add(y)
    # then unwrap the set?
    return [i for i in range(2*len(relations) + 2) if i in mutual]