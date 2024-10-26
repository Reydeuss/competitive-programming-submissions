# Code & Solution by Reydeuss @ Github
# Problem Title: Reverse Linked List
# Short Problem Description: Given a linked list, return the head of the reversed version of the linked list.
# Problem Link: https://leetcode.com/problems/reverse-linked-list/
# Submission Link: https://leetcode.com/problems/reverse-linked-list/submissions/1432401082

from typing import Optional

# Definition for singly-linked list.
# In Leetcode the ListNode definition needs to be commented out to prevent runtime error
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None or head.next is None:
            return head

        current = None

        while head is not None:
            current = ListNode(head.val, current)
            head = head.next

        return current
