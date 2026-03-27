// Last updated: 3/28/2026, 1:00:56 AM
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
    public ListNode removeElements(ListNode head, int val) {
        if(head==null) return null;
        // while(head!=null && head.val == val){
        //     head=head.next;
        // }
        // ListNode temp =head;
        // while(temp !=null && temp.next!=null){
        //     if(temp.next.val == val){
        //         temp.next = temp.next.next;
        //     }else{
        //         temp=temp.next;
        //     }
        // }
        // return head;

// Recursive Solution

        head.next = removeElements(head.next,val);
        if(head.val==val){
            return head.next;
        }else
            return head;


    }
}