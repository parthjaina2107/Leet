struct ListNode* removeElements(struct ListNode* head, int val) {
    // 1. Remove matching nodes at the head of the list
    while (head != NULL && head->val == val) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
    }

    // 2. Traversal for remaining nodes
    struct ListNode* temp = head;
    while (temp != NULL && temp->next != NULL) {
        if (temp->next->val == val) {
            struct ListNode* t = temp->next;
            temp->next = temp->next->next;
            free(t);
            // Stay on current temp to evaluate the newly linked temp->next
        } else {
            // Only advance if no node was deleted
            temp = temp->next;
        }
    }

    return head;
}