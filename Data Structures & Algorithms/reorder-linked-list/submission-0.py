# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:

        arr = []
        itr = head
        while itr:
            arr.append(itr)
            itr = itr.next
        
        n = len(arr)
        
        itr = head
        i = 1
        j = n-1
        
        while i <= j  :
            itr.next = arr[j]
            itr = itr.next
            j -= 1

            if i <= j:
                itr.next = arr[i]
                itr = itr.next
                i += 1
        
        itr.next = None

      
           
        



        