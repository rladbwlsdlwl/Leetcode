class RecentCounter:

    def __init__(self):
        self.requests=[]

    def ping(self, t: int) -> int:
        self.requests.append(t)
        return len(self.requests[self.binary_search(t-3000, 0, len(self.requests)-1):])
        
    
    def binary_search(self,key,start,end):
        if(start<=end):
            mid=(start+end)//2
            if(self.requests[mid]>key):
                return self.binary_search(key,start,mid-1)
            elif(self.requests[mid]<key):
                return self.binary_search(key,mid+1,end)
            else:
                return mid
            
        else:
            return start
# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)
