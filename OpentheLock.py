class Solution:
    def openLock(self, deadends: List[str], target: str) -> int:
        visited = [False for _ in range(10000)]
        deadendsArr = [False for _ in range(10000)]

        for n in deadends:
            deadendsArr[int(n)] = True

        if deadendsArr[0]: # deadends = "0000"
            return -1
        if target == "0000": 
            return 0

        # bfs - deque
        deq = deque()
        deq.append(("0000", 0))
        visited[0] = True
        while deq:
            num, cnt = deq.popleft()

            for i in range(4):
                asc, desc = "", ""
                for j in range(4):
                    if i==j:
                        asc += '0' if num[i] == '9' else str(int(num[i]) + 1)
                        desc += '9' if num[i] == '0' else str(int(num[i]) - 1)
                    else:
                        asc, desc = asc + num[j], desc + num[j]

                if target == asc or target == desc:
                    return cnt + 1
                if not visited[int(asc)] and not deadendsArr[int(asc)]:
                    deq.append((asc, cnt + 1))
                    visited[int(asc)] = True
                if not visited[int(desc)] and not deadendsArr[int(desc)]:
                    deq.append((desc, cnt + 1))
                    visited[int(desc)] = True
                
        return -1
