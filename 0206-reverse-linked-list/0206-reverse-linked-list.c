/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* curr = head;
    struct ListNode* prev = NULL;
    struct ListNode* nxt = NULL;
    if(head!=NULL){
            while(curr != NULL){
            nxt = curr->next;
            curr->next = prev;
            prev=curr;
            curr= nxt;
        }
        return prev;
    }
    else{
        return head;
    }
}