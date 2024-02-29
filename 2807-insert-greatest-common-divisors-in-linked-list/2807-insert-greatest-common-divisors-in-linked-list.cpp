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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* first = head;
        ListNode* second;

        while (first->next != NULL) {
            second = first->next;
            int a = first->val;
            int b = second->val;
            ListNode* tmp = new ListNode(gcd(a, b));
            tmp->next = second;
            first->next = tmp;
            first = second;
        }
        
        return head;
    }
};