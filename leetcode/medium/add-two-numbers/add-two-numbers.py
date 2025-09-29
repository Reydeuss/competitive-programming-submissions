# Submission & solution by Reydeus
# Title: 2. Add Two Numbers
# Original Problem: https://leetcode.com/problems/add-two-numbers/
# Submission: https://leetcode.com/problems/add-two-numbers/submissions/1678297524

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# Definition for singly-linked list.

def parse_number(node: ListNode):
    result = 0
    power = 0
    while node:
        result += pow(10, power) * node.val
        node = node.next
        power += 1
    return result

def encode_number(num):
    if num == 0:
        return ListNode()

    head = curr = None
    while num > 0:
        digit = num % 10
        if not head:
            curr = ListNode(val=digit)
            head = curr
        else:
            curr.next = ListNode(val=digit)
            curr = curr.next
        num //= 10
    return head

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        a = parse_number(l1)
        b = parse_number(l2)
        # print(a)
        # print(b)
        return encode_number(a + b)
