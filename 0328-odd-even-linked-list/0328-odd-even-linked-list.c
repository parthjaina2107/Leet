/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    struct ListNode *odd,*even,*evenloc;
    if(head == NULL || head->next == NULL){
        return head;
    }
    odd= head;
    even = head->next;
    evenloc= head->next;
    while(even!=NULL && even->next !=NULL){
        odd->next = odd->next->next;
        even->next=even->next->next;
        odd= odd->next;
        even=even->next;
    }
    odd->next = evenloc;
    return head;
}