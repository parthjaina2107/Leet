/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* partition(struct ListNode* head, int x) {
    
    struct ListNode beforeDummy;
    struct ListNode afterDummy;
    
    struct ListNode* before = &beforeDummy;
    struct ListNode* after = &afterDummy;
    
    beforeDummy.next = NULL;
    afterDummy.next = NULL;
    
    while (head != NULL) {
        
        if (head->val < x) {
            before->next = head;
            before = before->next;
        }
        else {
            after->next = head;
            after = after->next;
        }
        
        head = head->next;
    }
    
    // Connect the two lists
    before->next = afterDummy.next;
    
    // Important: terminate the after list
    after->next = NULL;
    
    return beforeDummy.next;
}