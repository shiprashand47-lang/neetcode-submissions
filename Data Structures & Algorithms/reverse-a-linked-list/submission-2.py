# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        current = head
        prevnode = None
        nextnode = None

        while current:
            nextnode = current.next
            current.next = prevnode
            prevnode = current
            current = nextnode

        return prevnode

