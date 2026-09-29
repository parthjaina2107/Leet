/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteDuplicates(struct ListNode* head) {
    
    struct ListNode dummy;
    dummy.next = head;
    
    struct ListNode* prev = &dummy;
    struct ListNode* curr = head;
    
    while (curr != NULL) {
        
        // Check if current node has duplicates
        if (curr->next != NULL && curr->val == curr->next->val) {
            
            int duplicate = curr->val;
            
            // Skip all nodes with the duplicate value
            while (curr != NULL && curr->val == duplicate) {
                curr = curr->next;
            }
            
            prev->next = curr;
        }
        else {
            // Current node is unique
            prev = curr;
            curr = curr->next;
        }
    }
    
    return dummy.next;
}