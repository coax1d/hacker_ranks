#!/usr/bin/python3

"""
author: Andrew Burger

LeetCode problem:
O(n) Solution to finding the maxsubarray using Kadane's Algorithm
O(1) Memory
"""

from typing import List

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:

        max_sum = 0
        current_sum = 0

        ## all negative numbers case only the single highest negative matters
        if max(nums) < 0:
            return max(nums)

        for num in nums:
            # Throw away all negative sums
            current_sum = max(0, current_sum + num)
            max_sum = max(max_sum, current_sum)

        return max_sum

def main():
    test_array = [-3,2,-5,1,4,8,-5,-7,-9]
    obj = Solution()
    solution = obj.maxSubArray(test_array)
    print("Max of %s is %s" % (test_array, solution))

if __name__ == "__main__":
    main()