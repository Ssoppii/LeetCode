# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deepestLeavesSum(self, root: Optional[TreeNode]) -> int:
        depth = 0
        ans = 0
        q = [(root, 0)]
        
        while len(q) != 0:
            v, d = q.pop(0)

            if d > depth:
                depth = d
                ans = 0
            ans += v.val

            if v.left is not None:
                q.append((v.left, d + 1))
            if v.right is not None:
                q.append((v.right, d + 1))
                
        return ans