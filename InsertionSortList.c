/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* insertion(struct ListNode*head, struct ListNode*tail){
    if(head->next!=tail)
        head->next=insertion(head->next,tail);
   
    if(head->val<head->next->val)
        return head;
    else{
        int temp=head->next->val;
        head->next->val=head->val;
        head->val=temp;
        return head;
    }
}


struct ListNode* insertionSortList(struct ListNode* head){
    if(!head) return head;
    
    int i=1;
    while(1){
        struct ListNode*curr=head;
        for(int j=0;j<i;j++)
            curr=curr->next;
        if(!curr) break;
        head=insertion(head,curr);
        i++;
    }
    
    
    return head;
}
