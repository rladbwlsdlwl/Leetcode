# definition for singly-linked list.
# class listnode:
#     def __init__(self, val=0, next=none):
#         self.val = val
#         self.next = next
class solution:
    def addtwonumbers(self, l1: listnode, l2: listnode) -> listnode:
        def listtoint(head):
            number=0
            while(head):
                number*=10
                number+=head.val
                head=head.next
            
            return number
        
        def makelist(n):
            p=listnode(-1)
            head=p
            for c in n:
                p.next=listnode(c)
                p=p.next
            
            return head.next
        
        return makelist(str(listtoint(l1)+listtoint(l2)))
                         
