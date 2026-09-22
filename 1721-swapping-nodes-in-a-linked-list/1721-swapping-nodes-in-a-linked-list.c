/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    int count = 0;
    struct ListNode* temp = head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int arr[count];
    int i =0;
    temp = head;
    while(temp!=NULL){
        arr[i]=temp->val;
        temp=temp->next;
        i++;
    }
    void swap(int arr[],int a , int b){
        int v = arr[a];
        arr[a]=arr[b];
        arr[b]=v;
    }
    swap(arr,k-1,count-k);
    temp = head;
    for(i=0;i<count;i++){
        temp->val = arr[i];
        temp=temp->next;
    }
    return head;
}