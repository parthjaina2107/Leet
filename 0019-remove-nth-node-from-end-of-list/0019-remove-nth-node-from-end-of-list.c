/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* fast=head;
    int i;
    for(i=0;i<n;i++){
        fast=fast->next;
    }
    struct ListNode* slow=head;
    if(fast==NULL){
        struct ListNode* delNode=head;
        head=head->next;
        free(delNode);
        return head;
    }
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    struct ListNode* temp = slow->next;
    slow->next=slow->next->next;
    free(temp);
    return head;
}