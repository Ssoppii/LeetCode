/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int gcd(int a ,int b){
    int i = 2;
    int ans = 1;
    while(i <= a && i <= b){
        if(a % i == 0 && b % i == 0)
            ans = i;  
        i++;
    }
    return ans;
}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head){
    struct ListNode* first = head;
    struct ListNode* second;
    while (first->next != NULL) {
        second = first->next;
        int a = first->val;
        int b = second->val;
        struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
        tmp->val = gcd(a, b);     
        tmp->next = second;
        first->next = tmp;
        first = second;
    }
    return head;
}