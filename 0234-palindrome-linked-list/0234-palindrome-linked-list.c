/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverse(struct ListNode* head){
    if(head->next ==NULL){
        return head;
    }
    struct ListNode* curr = head;
    struct ListNode* prev= NULL;

    while(curr!=NULL){
        struct ListNode* next = curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;  
    }
    return prev;
}
bool isPalindrome(struct ListNode* head) {
        struct ListNode* slow=head;
        struct ListNode* fast=head;
        fast=head;
        if(head->next == NULL && head->val == 1){
            return true;
        }
        if(head->next==NULL){
            return false;
        }

        while(fast->next !=NULL && fast->next->next !=NULL){
            fast = fast->next->next;
            slow=slow->next;
        }
        struct ListNode* newhead = reverse(slow->next);
        struct ListNode* newnode= head;
        while(newhead!=NULL){
            if(newnode->val != newhead->val){
                return false;
            }
            newnode=newnode->next;
            newhead=newhead->next;
        }
        return true;
}