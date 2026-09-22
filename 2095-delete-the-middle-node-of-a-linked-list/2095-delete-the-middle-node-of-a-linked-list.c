/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return NULL;
    struct ListNode* temp = head;
    int count =0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    count = count/2;
    temp = head;
    while(count > 1){
        temp=temp->next;
        count--;
    }
    struct ListNode* Del = temp->next;
    temp->next = temp->next->next;
    free(Del);
    return head;
}