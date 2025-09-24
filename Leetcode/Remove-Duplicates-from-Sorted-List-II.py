# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        cur = head
        perv = dummy
            
        while cur and cur.next:
            if cur.val == cur.next.val:
                dupValue = cur.val
                while cur and dupValue == cur.val:
                    cur = cur.next
                perv.next = cur
            else:
                perv = cur
                cur = cur.next
            

        return dummy.next