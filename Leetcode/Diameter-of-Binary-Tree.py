# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.diameter = 0
        
        def treeHight(node):
            if not node:
                return 0
            leftHight= treeHight(node.left)
            rightHight = treeHight(node.right)
            self.diameter = max(self.diameter, leftHight + rightHight)

            return max(leftHight, rightHight) + 1
        treeHight(root)
        return self.diameter