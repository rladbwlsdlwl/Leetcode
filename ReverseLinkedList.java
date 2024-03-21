/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    ListNode curr = null;
    public ListNode reverseList(ListNode head) {
        ListNode p = new ListNode(-1);
        this.curr = p;

        reverseOrder(head);

        return p.next;
    }
    private ListNode reverseOrder(ListNode head){
        if(head == null)
            return null;

        ListNode p = reverseOrder(head.next);
        this.curr.next = new ListNode(head.val);
        this.curr = this.curr.next;

        return head;
    }
}
