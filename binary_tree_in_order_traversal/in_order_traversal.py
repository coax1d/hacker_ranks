#!/usr/bin/python3

"""
author: Andrew Burger

LeetCode problem:
O(n) Solution using a stack for an in order traversal of a binary tree
"""

from typing import List

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:

        stack = []
        order = []

        while root or stack:

            while root:
                stack.append(root)
                root = root.left

            root = stack.pop()
            order.append(root.val)
            root = root.right

        return order

def main():
    # Tree [1,2,null,4,3]
    node1 = TreeNode(val=4, left=None, right=None)
    node2 = TreeNode(val=3, left=None, right=None)
    node3 = TreeNode(val=2, left=node1, right=node2)
    node4 = TreeNode(val=1, left=node3, right=None)

    obj = Solution()
    answer = obj.inorderTraversal(node4)
    print("For tree [1,2,null,4,3] inorder Traversal is %s" % (answer))

if __name__ == "__main__":
    main()
