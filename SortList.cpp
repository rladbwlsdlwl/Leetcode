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
    ListNode* sortList(ListNode* head) {
       vector<int>tmp;
        add_list(head,tmp);
        sort(tmp.begin(), tmp.end());
        ListNode*curr=new ListNode(-1);
        head=curr;
        for(int i=0;i<tmp.size();i++){
            curr->next=new ListNode(tmp[i]);
            curr=curr->next;
        }
    
        return head->next;
    }
    
    void add_list(ListNode*head,vector<int>&tmp){
        while(head){
            tmp.push_back(head->val);
            head=head->next;
        }
        
    }
};
