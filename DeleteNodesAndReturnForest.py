# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def delNodes(self, root: Optional[TreeNode], to_delete: List[int]) -> List[TreeNode]:
        ans = []

        def dfs(node):
            if node == None:
                return None
            if node.val in to_delete:
                if node.left:
                    leftNode = dfs(node.left)
                    if leftNode:
                        ans.append(leftNode)
                if node.right:
                    rightNode = dfs(node.right)
                    if rightNode:
                        ans.append(rightNode)
                
                return None

            node.left = dfs(node.left)
            node.right = dfs(node.right)

            return node

        rootNode = dfs(root)
        if rootNode:
            ans.append(rootNode)
        return ans
