# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:

        def gcd(a, b):
            while b > 0:
                a, b = b, a % b
            return a
        
        first = head
        while first.next != None:
            second = first.next
            tmp = ListNode()
            tmp.val = gcd(first.val, second.val)
            tmp.next = second
            first.next = tmp
            first = second

        return head