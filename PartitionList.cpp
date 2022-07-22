/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next)
            return head;
        
        
        ListNode* Head=new ListNode(x-1, head);
        
        ListNode* pBefore=Head, *pAfter=Head->next;
        while(pAfter){
            if(pAfter->val>=x)
                break;
            pBefore=pAfter;
            pAfter=pAfter->next;
        }
        
        ListNode*curBefore=pBefore, *curAfter=pAfter;
        while(curAfter){
            if(curAfter->val<x){
                curBefore->next=curAfter->next;
                curAfter->next=pAfter;
                pBefore->next=curAfter;
                
                pBefore=curAfter;
                curAfter=curAfter->next;
            }else{
                curBefore=curAfter;
                curAfter=curAfter->next;
            }
        }
        
        return Head->next;
        
    }
};
