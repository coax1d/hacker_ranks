#!/usr/bin/python3

"""
author: Andrew Burger

LeetCode problem:
O(n) Solution for adding two binary numbers WITHOUT!!! using python int function

simplest one-line solution in python would be:

return str(bin(int(a,2) + int(b,2))[2:])
"""

from typing import List

class Solution:
    def addBinary(self, a: str, b: str) -> str:

        bin_num = 0

        power_idx = len(a) - 1
        for num in a:
            if num == "1":
                bin_num += pow(2, power_idx)
            power_idx -= 1

        power_idx = len(b) - 1
        for num in b:
            if num == "1":
                bin_num += pow(2, power_idx)
            power_idx -= 1

        return str(bin(bin_num)[2:])

def main():
    test_input1 = "1010" # 10
    test_input2 = "1011" # 11

    obj = Solution()
    print("1010 + 1011 == %s" % (obj.addBinary(test_input1, test_input2)))

if __name__ == "__main__":
    main()