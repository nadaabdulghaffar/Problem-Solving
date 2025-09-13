# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        # To handle edge cases (like removing first node)
        dummy = ListNode(0, head) # insert new value 
        slow = fast = dummy

        # move fast with n steps
        for _ in range(n):
            fast = fast.next

        # move fast to end , slow follows
        while fast.next:
            fast = fast.next
            slow = slow.next

        slow.next = slow.next.next

        return dummy.next