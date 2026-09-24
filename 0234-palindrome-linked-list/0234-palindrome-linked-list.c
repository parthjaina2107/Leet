struct ListNode* reverse(struct ListNode* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    struct ListNode* curr = head;
    struct ListNode* prev = NULL;

    while(curr != NULL){
        struct ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

bool isPalindrome(struct ListNode* head) {

    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while(fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    struct ListNode* secondHalf = reverse(slow->next);

    struct ListNode* first = head;
    struct ListNode* second = secondHalf;

    while(second != NULL){
        if(first->val != second->val){
            reverse(secondHalf);
            return false;
        }

        first = first->next;
        second = second->next;
    }

    reverse(secondHalf);

    return true;
}