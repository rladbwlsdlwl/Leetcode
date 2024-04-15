# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def amountOfTime(self, root: Optional[TreeNode], start: int) -> int:
        # edge 2 up 
        # graph
        # unique number = no cycle

        def dfs(graph, visited, start):
            visited[start] = True

            ans = 0
            for n in graph[start]:
                if(not visited[n]):
                    ans = max(ans, dfs(graph, visited, n)+1)

            return ans


        N = 100001
        visited = [False]*N
        graph = [[] for _ in range(N)]

        # make graph 
        stk = [root]
        while(len(stk)):
            node = stk.pop()

            if(node.left):
                graph[node.val].append(node.left.val)
                graph[node.left.val].append(node.val)
                stk.append(node.left)
            if(node.right):
                graph[node.val].append(node.right.val)
                graph[node.right.val].append(node.val)
                stk.append(node.right)

        # dfs
        return dfs(graph, visited, start) 
                
