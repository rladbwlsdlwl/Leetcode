/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* rotateRight(struct ListNode* head, int k){
    if(!head || !head->next)
        return head;
    
    int len=1;
    struct ListNode*curr=head;
    while(curr->next){
        len++; curr=curr->next;
    }
    
    k%=len; //minimize movement
    
    if(k==0)
        return head;
    
    struct ListNode*p=head;
    for(int i=0; i<len-k-1; i++) p=p->next; //point before node

    struct ListNode*result=p->next;
    curr->next=head;
    p->next=NULL;
    
    return result;
}
