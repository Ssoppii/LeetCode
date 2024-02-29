# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def __help(self, root, ans):
        if root == None:
            return ans
        else:
            ans.append(root.val)
            self.__help(root.left, ans)
            self.__help(root.right, ans)

    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        self.__help(root, ans)

        return ans