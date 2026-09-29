/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode* curr = head->next;
    struct ListNode* result = head;
    struct ListNode* tail = NULL;

    int sum = 0;

    while (curr != NULL) {

        if (curr->val == 0) {
            result->val = sum;

            tail = result;
            result = result->next;

            sum = 0;
        } 
        else {
            sum += curr->val;
        }

        curr = curr->next;
    }

    // Remove all unused nodes
    if (tail != NULL)
        tail->next = NULL;

    return head;
}