/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverse(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;

    while (curr != NULL) {
        struct ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

struct ListNode* removeNodes(struct ListNode* head) {
    // Reverse the list
    head = reverse(head);

    // First node is always kept
    struct ListNode* curr = head;
    int maxVal = head->val;

    while (curr->next != NULL) {
        if (curr->next->val < maxVal) {
            // Remove next node
            curr->next = curr->next->next;
        } else {
            curr = curr->next;
            maxVal = curr->val;
        }
    }

    // Reverse back
    return reverse(head);
}