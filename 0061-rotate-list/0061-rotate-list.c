/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
if (head != NULL) {
    struct ListNode* temp = head;
    int count = 0;

    while (temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (count != 0) {
        k = k % count;
    }

    if (k != 0) {
        temp = head;
        int z = count - k;

        while (z != 1) {
            temp = temp->next;
            z--;
        }

        struct ListNode* head2 = temp->next;
        temp->next = NULL;
        temp = head2;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = head;
        head = head2;
    }
}

return head;
}