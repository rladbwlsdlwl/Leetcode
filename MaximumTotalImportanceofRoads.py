class Solution:
    def maximumImportance(self, n: int, roads: List[List[int]]) -> int:
        node = [0 for _ in range(n)]

        for node1, node2 in roads:
            node[node1] += 1
            node[node2] += 1

        node.sort()

        return sum(i*node[i-1] for i in range(1, n+1))
        '''
        graph = [[] for _ in range(n)]

        for node1, node2 in roads:
            graph[node1].append(node2)
            graph[node2].append(node1)

        # Breadth
        # min heap, priority_queue
        hq = []
        for i in range(n):
            heapq.heappush(hq, (len(graph[i]), i))

        
        node = [n+1 for _ in range(n)]
        while hq:
            width, pnode = heapq.heappop(hq)
            node[pnode] -= n
            n -= 1


        return sum(node[roads[i][0]] + node[roads[i][1]] for i in range(len(roads)))
        '''
        
