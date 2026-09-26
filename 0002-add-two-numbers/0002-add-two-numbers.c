/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* ans = malloc(sizeof(struct ListNode));
    struct ListNode* curr = ans;
    struct ListNode* t1 =l1;
    struct ListNode* t2 =l2;
    ans->val=1;
    int carry=0;
    while(t1!=NULL || t2!=NULL){
        int sum=carry;
        if(t1!=NULL){
            sum=sum+t1->val;
        }
        if(t2!=NULL){
            sum=sum+t2->val;
        }
        carry=sum/10;
        sum=sum%10;
        struct ListNode* newnode = malloc(sizeof(struct ListNode));
        newnode->val = sum;
        newnode->next=NULL;
        curr->next = newnode;
        curr=curr->next;
        if(t1!=NULL) t1=t1->next;
        if(t2!=NULL) t2=t2->next;
    }
    if(carry!=0){
        struct ListNode* newnode = malloc(sizeof(struct ListNode));
        newnode->val = carry;
        newnode->next = NULL;
        curr->next= newnode;
        curr=curr->next;
    }
    return ans->next;
}