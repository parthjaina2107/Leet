/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int a[100], b[100];
    int top1 = 0, top2 = 0;

    // Store l1 in stack
    while (l1 != NULL) {
        a[top1++] = l1->val;
        l1 = l1->next;
    }

    // Store l2 in stack
    while (l2 != NULL) {
        b[top2++] = l2->val;
        l2 = l2->next;
    }

    int carry = 0;
    struct ListNode* head = NULL;

    // Process from right to left
    while (top1 > 0 || top2 > 0 || carry) {
        int sum = carry;

        if (top1 > 0)
            sum += a[--top1];

        if (top2 > 0)
            sum += b[--top2];

        carry = sum / 10;

        struct ListNode* node = malloc(sizeof(struct ListNode));
        node->val = sum % 10;
        node->next = head;
        head = node;
    }

    return head;
}