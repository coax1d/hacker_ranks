#!/usr/bin/python3

"""
author: Andrew Burger

LeetCode problem:
O(n) Solution for adding one to a number whos digits are all a single
element in an array.
"""

from typing import List


class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:

        idx = len(digits) - 1
        solution = digits.copy()
        while idx >= 0:
            # solution[idx] != 9 case
            if solution[idx] != 9:
                solution[idx] = solution[idx] + 1
                break

            # solution[idx] == 9 case
            solution[idx] = 0

            # All elements are 9 i.e. [9,9,9,9]
            if idx - 1 < 0:
                solution.insert(0, 1)
                break

            idx -= 1

        return solution

def main():
    test1 = [9,9,9,9]
    test2 = [0]
    test3 = [1,2,3,4]
    tests = [test1, test2, test3]

    obj = Solution()

    for test in tests:
        solution = obj.plusOne(test)
        print("Test: %s" % (test))
        print("Solution: %s" % (solution))

if __name__ == "__main__":
    main()