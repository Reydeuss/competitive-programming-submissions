// Submission & solution by Reydeus
// Title: Reverse Linked List
// Original Problem: https://leetcode.com/problems/reverse-linked-list/
// Submission: https://leetcode.com/problems/reverse-linked-list/submissions/1786078153

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }

        stack<ListNode*> st;
        while (head != nullptr) {
            st.push(head);
            head = head->next;
        }

        ListNode* ret = st.top();

        while (!st.empty()) {
            ListNode* top = st.top();
            st.pop();
            top->next = st.empty() ? nullptr : st.top();
        }

        return ret;
    }
};
