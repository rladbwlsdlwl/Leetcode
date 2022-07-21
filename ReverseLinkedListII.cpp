/**
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left>=right)
            return head;
        else if(left!=1)
            head->next=reverseBetween(head->next, left-1, right-1);
        else{
            ListNode* cur=head;
            for(int i=0; i<right-left; i++)
                cur=cur->next;
            
            swap(head->val, cur->val);
            head->next=reverseBetween(head->next, left, right-2);
        }
    
        return head;
    }
};
